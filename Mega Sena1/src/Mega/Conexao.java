/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Mega;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Rafael
 */
public class Conexao {
    
    public Connection conn;
    public ResultSet rs;
    public Statement stmt;
    
    private final String url = "jdbc:mysql://localhost:3306/javadb";
    private final String usuario = "root";
    private final String senha = "";
    private final String driver = "com.mysql.jdbc.Driver";
    
    public void abrirConexao() throws ClassNotFoundException, InstantiationException, IllegalAccessException{
        
        
        try {
            Class.forName(driver).newInstance();
            conn = DriverManager.getConnection(url, usuario, senha);
            stmt = conn.createStatement();
        } catch (SQLException ex) {
            Logger.getLogger(Conexao.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    
    
}
