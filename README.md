# OpenEarsTutorial
OpenEars tutorial for iOS 7.2

I dealt with error message "linker command failed with exit code 1 (use -v to see invocation)" by setting "Enable Bitcode" to No and rewriting "Framework Search Paths"


## 概要
[http://www.politepix.com/openears/tutorial/](URL="http://www.politepix.com/openears/tutorial/") (2016年4月13日現在) のチュートリアルをもとに作成した。ところが、このままではiOS7.2以上では動かないようなので少しだけ変更する必要があった。またボタンを押したあとに音声認識を行うようにした。

## 変更点
### FrameWorkを追加するとき

まず作業ディレクトリ内に、External/Frameworkを作った。
FrameworkはOpenEarsDistribution のと同じもの。

OpenEars.framework と Slt.framework は General->Linked Frameworks and Libraries から追加した。

AcousticModelEnglish.bundle はドラッグ&ドロップで普通に追加した。

### Framework Search Paths

ここではFrameworkをExternalのディレクトリに置いているので、Build SettingsからFramework Search Paths に
```
$(PROJECT_DIR)/External/Framework
```
を追加する。

### Enable Bitcode [重要]

Build Setting から Enable Bitcode の設定を No にする。
これを行わないと、
```
Linker command failed with exit code 1 (use -v to see invocation)
```
のエラーメッセージが表示される。
