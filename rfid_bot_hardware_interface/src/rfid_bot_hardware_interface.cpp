#include "rfid_bot_hardware_interface/rfid_bot_hardware_interface.hpp"

namespace rfid_bot_system_hardware_interface {

hardware_interface::CallbackReturn RfidBotSystemHardware::on_init(
    const hardware_interface::HardwareInfo& info) {
    if (hardware_interface::SystemInterface::on_init(info) !=
        hardware_interface::CallbackReturn::SUCCESS) {
        return hardware_interface::CallbackReturn::ERROR;
    }

    return hardware_interface::CallbackReturn::SUCCESS;
}

std::vector<hardware_interface::StateInterface>
RfidBotSystemHardware::export_state_interfaces() {
    std::vector<hardware_interface::StateInterface> state_interfaces;

    return state_interfaces;
}

std::vector<hardware_interface::CommandInterface>
RfidBotSystemHardware::export_command_interfaces() {
    std::vector<hardware_interface::CommandInterface> command_interfaces;

    return command_interfaces;
}

hardware_interface::CallbackReturn RfidBotSystemHardware::on_activate(
    const rclcpp_lifecycle::State& /*previous_state*/) {
    return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn RfidBotSystemHardware::on_deactivate(
    const rclcpp_lifecycle::State& /*previous_state*/) {
    return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::return_type RfidBotSystemHardware::read(
    const rclcpp::Time& /*time*/, const rclcpp::Duration& /*period*/) {
    return hardware_interface::return_type::OK;
}

hardware_interface::return_type RfidBotSystemHardware::write(
    const rclcpp::Time& /*time*/, const rclcpp::Duration& /*period*/) {
    return hardware_interface::return_type::OK;
}

}  // namespace rfid_bot_system_hardware_interface

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(
    rfid_bot_system_hardware_interface::RfidBotSystemHardware,
    hardware_interface::SystemInterface)
