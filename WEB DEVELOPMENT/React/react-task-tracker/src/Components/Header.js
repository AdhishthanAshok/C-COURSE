import PropTypes from "prop-types";

const Header = () => {
  return (
    <header className="header">
      <h1>Task Tracker</h1>
      <button className="btn">Add</button>
    </header>
  );
};

// Header.defaultProps = {
//   title: "Task Tracker",
// };

Header.propTypes = {
  title: PropTypes.string.isRequired,
};

export default Header;09=
