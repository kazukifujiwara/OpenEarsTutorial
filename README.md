# OpenEarsTutorial
OpenEars tutorial for iOS (Xcode7.2.1)

I developed this application based on tutorial pubulished on the official website. However, the following error message was displayed when build with Xcode 7.2.1 : "linker command failed with exit code 1 (use -v to see invocation)". To deal with this problem, I set "Enable Bitcode" to "No".


## 概要
[http://www.politepix.com/openears/tutorial/](URL="http://www.politepix.com/openears/tutorial/") (2016年4月13日現在) のチュートリアルをもとに作成した。ところが、このままではXcode7.2以上では動かないようなのでビットコードの設定を変える必要があった。またボタンを押したあとに音声認識を行うようにした。

<!--

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

-->

### Enable Bitcode


Build Setting から Enable Bitcode の設定を No にする。
これを行わないと、
```
Linker command failed with exit code 1 (use -v to see invocation)
```
のエラーメッセージが表示される。

どうやらiOS9からのアプリ最適化の仕組みAppThinningのため、Xcode7 betaからはアプリへのbitcodeの埋め込みがデフォルトで有効になったそう。

詳しくは

- [LLVM bitcode基礎知識 http://qiita.com/gamako/items/f37dbb05de9d3832ce6b](URL="http://qiita.com/gamako/items/f37dbb05de9d3832ce6b")
- [Xcode7でbitcodeのエラーが出た http://qiita.com/satoshi_imanishi/items/8b64af8262d7fe2eb2ba](http://qiita.com/satoshi_imanishi/items/8b64af8262d7fe2eb2ba)
- [App Thinning (iOS, tvOS, watchOS) https://developer.apple.com/library/ios/documentation/IDEs/Conceptual/AppDistributionGuide/AppThinning/AppThinning.html](URL="https://developer.apple.com/library/ios/documentation/IDEs/Conceptual/AppDistributionGuide/AppThinning/AppThinning.html")

を参照。