# Türkçe Heceleme Programı (C++)

> Girilen cümle veya kelimeleri hecelerine ayıran C++ diliyle yazılmış program.

## Türkçe Heceleme Kuralları

Türkçede kelime içinde iki ünlü arasındaki ünsüz, kendinden sonraki ünlüyle hece kurar: a-ra-ba, bi-çi-mi-ne, in-sa-nın, ka-ra-ca vb.

Kelime içinde yan yana gelen iki ünsüzden ilki kendinden önceki ünlüyle, ikincisi kendinden sonraki ünlüyle hece kurar: al-dı, bir-lik, sev-mek vb.

Kelime içinde yan yana gelen üç ünsüz harften ilk ikisi kendinden önceki ünlüyle, üçüncüsü kendinden sonraki ünlüyle hece kurar: alt-lık, Türk-çe, kork-mak vb.

[Daha fazlası için...](http://tdk.gov.tr/icerik/yazim-kurallari/hece-yapisi-ve-satir-sonunda-kelimelerin-bolunmesi/)

## Kurulum:

- Git konsolunu açın ve konsola ```git clone https://github.com/zumrudu-anka/Turkce-Heceleme-CPP.git``` komutunu yazarak repoyu bilgisayarınıza kopyalayın. (Yukarıda bulunan **Download ZIP** butonunu kullanarak da indirme işlemini yapabilirsiniz).

## Kullanım:

- Proje dizininde bulunan **src** klasörünün içindeki **main.cpp** dosyasını herhangi bir metin editörü veya C++ destekli bir kod editörü ile açın. Bu dosyada bulunan **result** adlı değişkene tırnak içinde olacak şekilde hecelerine ayırmak istediğiniz kelimeleri veya cümleleri setleyin.

- Makefile dosyasının bulunduğu dizinde komut satırını açın ve ```mingw32-make.exe``` komutunu çalıştırın.(Komut satırı bu dizini işaret etmeli)
  - > Not : ```mingw32-make.exe``` komutunu bu şekilde çalıştırabilmeniz için sisteminizde **mingw** yüklü olmalıdır ve yüklü olduğu dizinin alt dizini olan bin dizininin yolu ortam değişkenlerine eklenmiş olmalıdır.
  - > Örnek : C dizinine yüklediğimizi varsayalım. ```C:\MinGW\bin``` dizin yolunu ortam değişkenlerine eklemeliyiz. Bunun için ```Denetim Masası -> Sistem ve Güvenlik -> Sistem -> Gelişmiş Sistem Ayarları -> Ortam Değişkenleri``` ve açılan pencerede kullanıcı değişkenlerinin altında **Path** seçeneğine tıklayıp düzenle butonuna tıklayın. Açılan pencerede yeni butonuna tıklayın ve MinGW projesinin yüklü olduğu dizinin yolunu ```C:\MinGW\bin``` şeklinde ekleyin ve onaylayın. Bu işlemden sonra komut satırında C++ kodlarını derleyebilir ve mingw32-make komutunu kullanabilirsiniz.
