# coding: utf-8

# ****************************************************************************
# * @file: check.py
# * @project: ROBOFEI-HT - FEI 😛
# * @author: Vinicius Nicassio Ferreira
# * @version: V0.0.1
# * @created: 23/10/2017
# * @e-mail: vinicius.nicassio@gmail.com
# * @brief: Class check
# ****************************************************************************

# ---- Imports ----

# Libraries to be used.
import time
import sys
import os
os.chdir('../../')
sys.path.append('./include')
sys.path.append('./src')

num_files = 10

key = "S"
while key.upper() == "S":
    # Selecionando arquivos
    xmls = [i.rsplit(".", 1)[0] for i in os.listdir("./Train/DNN/annotations DNN")][:num_files]
    if xmls == []:
        print "Nenhuma imagens pré-classificada pela DNN"
        time.sleep(1)
        xmls = [i.rsplit(".", 1)[0] for i in os.listdir("./Train/DNN/imagens to classify")][:num_files]
        if xmls == []:
            print "Não tem mais imagens para serem marcadas"
            time.sleep(1)
            break
    
    # Organizando arquivos nas pastas
    os.system("mkdir ./Train/DNN/imagens\ to\ check")
    for files in xmls:
        os.system("mv ./Train/DNN/imagens\ to\ classify/"+files.replace(":", "\\:").replace(" ", "\\ ")+".jpg ./Train/DNN/imagens\ to\ check")
    
    # Abrindo programa de marcação
    os.system("clear")
    os.system("python ~/labelImg/labelImg.py")# $(pwd)/Train/DNN/imagens\ to\ check/ $(pwd)/Train/DNN/annotations\ DNN/")
    
    os.system("clear")
    key = raw_input("As marcações foram finalizadas ? [S/N]: ")
    if key.upper() == "N":
        os.system("mv ./Train/DNN/imagens\ to\ check/* ./Train/DNN/imagens\ to\ classify")
        break
    
    # Finalizando marcações e separando classificações
    os.system("mkdir ./Train/DNN/annotations")
    os.system("mkdir ./Train/DNN/imagensTrain")
    os.system("mv ./Train/DNN/imagens\ to\ check/* ./Train/DNN/imagensTrain")
    for files in xmls:
        os.system("mv ./Train/DNN/annotations\ DNN/"+files.replace(":", "\\:").replace(" ", "\\ ")+".xml ./Train/DNN/annotations")
        os.system('sed -i "s/imagens to check/imagensTrain/g" ./Train/DNN/annotations/'+files.replace(":", "\\:").replace(" ", "\\ ")+".xml")
    
    os.system("clear")
    key = raw_input("Deseja checar/marcar mais " + str(num_files) + " imagens ? [S/N]: ")

os.system("rm -R ./Train/DNN/imagens\ to\ check")