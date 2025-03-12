import java.io.*;

public class ReadCSV {
    public static void main(String[] args) {
        String filePath = "/mnt/g/Nithin/GPU_Logs_20250311.txt";

        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            System.err.println("Error: Could not read the file!");
            e.printStackTrace();
        }
    }
}
