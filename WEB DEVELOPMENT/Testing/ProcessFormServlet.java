import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/process_form")
public class ProcessFormServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        // Database connection parameters (Replace these with your actual database details)
        String url = "jdbc:mysql://localhost:3306/testdb";
        String username = "root";
        String password = "password";

        try {
            // Establish database connection
            Connection connection = DriverManager.getConnection(url, username, password);

            // Get form data
            String name = request.getParameter("name");
            String roll = request.getParameter("roll");
            String course = request.getParameter("course");

            // Insert data into the database
            String sql = "INSERT INTO student_details (name, roll, course) VALUES (?, ?, ?)";
            try (PreparedStatement preparedStatement = connection.prepareStatement(sql)) {
                preparedStatement.setString(1, name);
                preparedStatement.setString(2, roll);
                preparedStatement.setString(3, course);
                int rowsAffected = preparedStatement.executeUpdate();
                response.getWriter().write(rowsAffected + " record(s) added successfully");
            } catch (SQLException e) {
                response.getWriter().write("Error: " + e.getMessage());
            }

            // Close connection
            connection.close();
        } catch (SQLException e) {
            response.getWriter().write("Connection failed: " + e.getMessage());
        }
    }
}
