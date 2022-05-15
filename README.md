# Bad-Usb Digispark Nasıl Hazırlanır

### Bad-Usb Nedir ?
**Bad-Usb** klavyede yaptığınız işlemleri otomatikleştiren bir usb aygıttır. Yani cihaz bilgisayara takıldığında bilgisayar onu klavye olarak görür ve içine yerleştirilen kodu çalıştırmaya başlar. Bilgisayara takıldığında ne yapılması isteniyorsa saniyeler içinde yapar.

Özellikle sosyal mühendislik testleri kapsamında fiziksel erişiminiz bulunan kurumlara karşı kullabilir, günlük işlemlerinizi hızlandırmak için veya arkadaşlarınıza şaka yapmak için kullanabilirsiniz :)

Piyasada bulunan popüler BadUSB'ler:
- Rubber Ducky
- Teensy
- Malduino (Arduino)
- Digispark (Arduino)
- CJMCU (Arduino)

**Not**: Arduino, çeşitli versiyonları bulunan mikro denetleyici ve bunu programlama için gerekli ekipmanları üzerinde bulunduran geliştirme kartlarının genel adıdır. Eğer bunları **bad-usb mantığında kodlarsak** bir bad-usb elde etmiş oluruz. Yani arduino ile uzaktan kumandalı araba, drone, ısı sensörü vs. gibi her şeyi yapabilirsiniz. Bizim inceleyeceğimiz ise bir **arduino çeşidi** olan **Digispark**



![Adsız](https://user-images.githubusercontent.com/65306271/168447710-b9365269-3b77-482d-8be0-4dd79aee633b.png)

### Bad-Usb Nasıl Hazırlanır ?
#### Arduino IDE Kurulum ve Konfigürasyon Arduino IDE Kurulum ve Konfigürasyon 
Öncelikle Digispark’ı programlayabilmemiz için arduino resmi sitesine giderek işletim
sisteminiz için doğru kurulum dosyasını indirin. Yüklerken varsayılan seçenekleri
değiştirmenize gerek yoktur.

1- Yüklendikten sonra Arduino IDE'yi açın ve şu adrese gidin:

![1](https://user-images.githubusercontent.com/65306271/168447732-3f631080-541f-4d34-9501-8e83036c87e3.png)

2- Açılan pencerede işaretli alana şunu yazın:

`http://digistump.com/package_digistump_index.json`

![2](https://user-images.githubusercontent.com/65306271/168447745-730505b4-428b-40f5-b6fc-2ea48522018c.png)

3- Daha sonrasında uygun olan kart ayarlarını yüklememiz gerekiyor. Bunun için belirtilen menülerden kart yöneticisini açıyoruz ve işaretli alana "digispark" yazıyoruz. çıkan kartı yüklüyoruz.

![3](https://user-images.githubusercontent.com/65306271/168447752-69f60048-73be-4645-b7db-08f405dd2ce1.png)
![4](https://user-images.githubusercontent.com/65306271/168447753-ec865e11-53ff-484d-99f3-cf33053b12ee.png)


4- Yükleme işlemi tamamlandıktan sonra aşağıdaki menüden ilgili kartımızı seçiyoruz.

![5](https://user-images.githubusercontent.com/65306271/168447788-638a0478-8aab-4f32-828b-786b427cdeff.png)

**İşlemlerimiz bu kadar artık kodlamaya geçebiliriz. Kodlama kısmı ise sizlerin hayal gücüne kalıyor. İsterseniz uzak bir sunucuya zararlı yazılım yükleyerek bunun bad-usb takılan makineye indirilip çalıştırılmasını sağlayabilirsiniz :)**

**İlerleyen vakitlerde bazı örnekler paylaşıyor olacağım.**
