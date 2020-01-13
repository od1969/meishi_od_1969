# meishi_od_1969 - The micro macro keyboard
  
■概要  
作者の@od_1969 のmeishi基板です。  
ジグザグ基板(いわゆる無限の可能性)のお試し基板として、キースイッチ、ソケット、ダイオード、ProMicroを取り付けると、9キーのキーパットとして使用できます。  
  
■使用する電子部品  
Cherry MX、MX互換スイッチ  
Kailh Choc ロープロファイルスイッチ  
MX用ソケット 型番：CPG151101S11  
Kailh Choc ロープロファイル用ソケット 型番：CPG135001S30  
ダイオード SMD パッケージ：SOD123 型番：1N4148W等  
ProMicro、ProMicro互換機  

上記の部品を取付可能なユニバーサル基板スペースがあります。  
Cherry MX、MX互換スイッチ、Kailh Choc ロープロファイルスイッチを直接はんだ付けする場合はソケットの取付方向から180度回転させて取り付けます。  
ピッチは19mmです。  
3/4inc(19.05mm)ピッチではありません。  
  
■ファームウェアについて  
QMK Firmwareを使用した使用方法を以下に記載します。  
  
QMK Firmwareのkeyboardsへ本リポジトリをコピーして  
make meishi_od_1969  
にてコンパイルできます。  

make meishi_od_1969:avrdude  
にて書き込みもできます。  
右下のキー(Fn)+左上のキーを押すと、書き込みモードでRESETです。  
