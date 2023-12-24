struct

Birbirleriyle ilişkili değişkenlerin, bir isim altında toplanmasına yapı adı verilir. Yapılar, değişik veri tiplerinde elemanlar içerebilirler ve dosya içinde tutulacak kayıtları oluşturmakta kullanılırlar. Yapılar, diğer tipte nesneler kullanılarak oluşturulan, türetilmiş veri tipleridir. Örnek bir yapı şu şekilde oluşturulabilir:
struct ogretmen
{
     public char[] ad = new char[20];
     public char[] soyad = new char[10];
     public short sinif;
}
struct anahtar kelimesi yapı tanımını başlatır. ogretmen tanıtıcısı yapı etiketidir. Yapı tanımında parantezler içinde bildirilen değişkenler ise yapı elemanlarıdır. 

typedef

C ve C++ programlama dillerinde tanımlı olan ve kullanılan typedef anahtar kelimesi, C# programlama dilinde bulunmamaktadır. typedef anahtar kelimesi ile bir veri türüyle aynı özellikte farklı isimde bir veri türü oluşturulur veya bu şekilde oluşturulmuş bir veri türünden farklı isimde ama aynı özellikte başka bir veri türü oluşturmak için kullanılır.

typedef anahtar kelimesinin kullanılmasının sebeplerinden birisi de programcının mevcut veri türünü kendi dilinde ifade etmesini sağlamak veya uzun veri türü isimlerinin kısaltmasını sağlamak olabilir.

typedef anahtar kelimesi iki tane parametre almaktadır. Bunlardan ilki, veri türünü belirtir. İkincisi, ilk parametredeki veri türünü ifade edecek yeni bir ismi ifade eder.

İşaretçiler (Pointers)

C dilinde, işaretçiler (pointers) bellekte bulunan verilerin adreslerini saklar. İşaretçi değişkenleri, verilerin bellekteki adreslerini saklar ve bu adreslerle çalışır. İşaretçiler, verileri bellekte direk olarak erişmenizi sağlar ve bu sayede verileri daha hızlı işleyebilirsiniz. Ayrıca, fonksiyonlar arasında veri paylaşımı yaparken de işaretçiler kullanılabilir. Özellikle dinamik bellek yönetiminde işaretçiler önemli bir rol oynamaktadır.

Neden işaretçileri kullanırız?

1- Belleği daha efektif bir şekilde kullanmak. Çünkü bir değişkenin veya nesnenin adresini işaretçi bilir. 
2- İşaretçiler diziler için kullanabiliriz. Pointer aritmetiğine daha sonra değineceğim. 
3- Bir fonksiyondaki değerin eşsiz olarak aktarılması (Bir fonksiyona ya da metoda parametre olarak işaretçileri geçirebiliriz. Mesela void Yazdir(veri_tipi* arguman)) 
4- Bağlantılı listeler(Linked List) gibi veri yapılarında daha efektif bir şekilde programlamak(Temel Veri yapılarının bir çoğunda kullanılır). 
5- C programlama dilinin sağladığı (malloc, free, realloc) fonksiyonlarını çağırarak bellek üzerinde kendimiz yarattığımız bir hafızayı dinamik olarak yaratabilip/yerleştirebilip/silebiliyoruz.

Açık arttırma ve oyun teorisi ilişkisi

![image](https://github.com/Enesyngn/AcikArttirmaUygulamasi/assets/111235591/72521152-5072-4108-9eba-2ec4ae644927)
![image](https://github.com/Enesyngn/AcikArttirmaUygulamasi/assets/111235591/463d5bae-048b-4226-b9a1-d18ab59c8242)
![image](https://github.com/Enesyngn/AcikArttirmaUygulamasi/assets/111235591/929c6138-ac81-4179-8f79-2f21582622e9)
![image](https://github.com/Enesyngn/AcikArttirmaUygulamasi/assets/111235591/f89767b0-e437-40e4-9352-d2c3e8bfdf77)
![image](https://github.com/Enesyngn/AcikArttirmaUygulamasi/assets/111235591/5011ffbd-5351-4e72-8463-18d7a0cb10d3)




