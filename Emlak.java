
public class Emlak {
	private String tipi;
	private String odaYapisi;
	private String isinma;
	private String kat;
	private String durum;
	private int fiyat;
	
	public Emlak(String tipi, String odaYapisi, String isinma, String kat, String durum, int fiyat) {
		super();
		this.tipi = tipi;
		this.odaYapisi = odaYapisi;
		this.isinma = isinma;
		this.kat = kat;
		this.durum = durum;
		this.fiyat = fiyat;
	}
	
	public Emlak() {
		this.tipi = "Belirtilmemiş";
		this.odaYapisi = "Belirtilmemiş";
		this.isinma = "Belirtilmemiş";
		this.kat = "Belirtilmemiş";
		this.durum = "Belirtilmemiş";
		this.fiyat = 0;
	}
		
	public void bilgileriGoster() {
		System.out.println("Emlak Türü: " + this.tipi);
		System.out.println("Oda Yapısı: " + this.odaYapisi);
		System.out.println("Isınma Türü: " + this.isinma);
		System.out.println("Kat: " + this.kat);
		System.out.println("Emlak Durumu: " + this.durum);
		System.out.println("Fiyat: " + this.fiyat );
	}

	public String getTipi() {
		return tipi;
	}

	public void setTipi(String tipi) {
		this.tipi = tipi;
	}

	public String getOdaYapisi() {
		return odaYapisi;
	}

	public void setOdaYapisi(String odaYapisi) {
		this.odaYapisi = odaYapisi;
	}

	public String getIsinma() {
		return isinma;
	}

	public void setIsinma(String isinma) {
		this.isinma = isinma;
	}

	public String getKat() {
		return kat;
	}

	public void setKat(String kat) {
		this.kat = kat;
	}

	public String getDurum() {
		return durum;
	}

	public void setDurum(String durum) {
		this.durum = durum;
	}

	public int getFiyat() {
		return fiyat;
	}

	public void setFiyat(int fiyat) {
		this.fiyat = fiyat;
	}
}
