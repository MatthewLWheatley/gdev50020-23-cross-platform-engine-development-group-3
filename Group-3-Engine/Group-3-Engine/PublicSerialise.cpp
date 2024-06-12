//Do not edit this file
//It is recreated on build
#include <json.hpp>
#include "PreBuild.h"
#include "AIAgent.h"
#include "AnimatorComponent.h"
#include "AudioComponent.h"
#include "CameraComponent.h"
#include "Collider.h"
#include "ColliderRenderComponent.h"
#include "CollisionManager.h"
#include "FlappyCatController.h"
#include "InputObserverComponent.h"
#include "NavigationComponent.h"
#include "PhysicsComponent.h"
#include "PlayerControllerComponent.h"
#include "PostProcessRenderComponent.h"
#include "ColliderRenderComponent.h"
#include "RotatorComponent.h"
#include "SpriteRenderComponent.h"
#include "SteeringBehaviourComponent.h"
#include "TextRenderComponent.h"
#include "TilemapRenderComponent.h"
#include "TimerManager.h"
#include "TransformComponent.h"
#include "UnusedClearComponent.h"
#include "VirtualButtonComponent.h"

void AIAgent::PublicSerialise(nlohmann::json& json) const
{
}

void AIAgent::PublicDeserialise(const nlohmann::json& component)
{
}

void AnimatorComponent::PublicSerialise(nlohmann::json& json) const
{
}

void AnimatorComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void AudioComponent::PublicSerialise(nlohmann::json& json) const
{
}

void AudioComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void CameraComponent::PublicSerialise(nlohmann::json& json) const
{
	json["m_x"] = m_x;
	json["m_y"] = m_y;
	json["m_angle"] = m_angle;
	json["m_zoom"] = m_zoom;
	json["m_width"] = m_width;
	json["m_height"] = m_height;
}

void CameraComponent::PublicDeserialise(const nlohmann::json& component)
{
	if (component.contains("m_x"))
		m_x = component["m_x"];
	if (component.contains("m_y"))
		m_y = component["m_y"];
	if (component.contains("m_angle"))
		m_angle = component["m_angle"];
	if (component.contains("m_zoom"))
		m_zoom = component["m_zoom"];
	if (component.contains("m_width"))
		m_width = component["m_width"];
	if (component.contains("m_height"))
		m_height = component["m_height"];
}

void Collider::PublicSerialise(nlohmann::json& json) const
{
	json["m_vertices"] = m_vertices;
	json["m_axis"] = m_axis;
}

void Collider::PublicDeserialise(const nlohmann::json& component)
{
	if (component.contains("m_vertices"))
		m_vertices = component["m_vertices"];
	if (component.contains("m_axis"))
		m_axis = component["m_axis"];
}

void ColliderRenderComponent::PublicSerialise(nlohmann::json& json) const
{
}

void ColliderRenderComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void CollisionManager::PublicSerialise(nlohmann::json& json) const
{
	json["m_colliding"] = m_colliding;
}

void CollisionManager::PublicDeserialise(const nlohmann::json& component)
{
	if (component.contains("m_colliding"))
		m_colliding = component["m_colliding"];
}

void FlappyCatController::PublicSerialise(nlohmann::json& json) const
{
}

void FlappyCatController::PublicDeserialise(const nlohmann::json& component)
{
}

void InputObserverComponent::PublicSerialise(nlohmann::json& json) const
{
}

void InputObserverComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void NavigationComponent::PublicSerialise(nlohmann::json& json) const
{
}

void NavigationComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void PhysicsComponent::PublicSerialise(nlohmann::json& json) const
{
	json["m_grav"] = m_grav;
	json["m_dragCoefficient"] = m_dragCoefficient;
	json["m_drag"] = m_drag;
	json["m_mass"] = m_mass;
	json["m_inverseMass"] = m_inverseMass;
	json["m_restitution"] = m_restitution;
	json["m_velocity"] = m_velocity;
	json["m_accel"] = m_accel;
	json["m_netForce"] = m_netForce;
}

void PhysicsComponent::PublicDeserialise(const nlohmann::json& component)
{
	if (component.contains("m_grav"))
		m_grav = component["m_grav"];
	if (component.contains("m_dragCoefficient"))
		m_dragCoefficient = component["m_dragCoefficient"];
	if (component.contains("m_drag"))
		m_drag = component["m_drag"];
	if (component.contains("m_mass"))
		m_mass = component["m_mass"];
	if (component.contains("m_inverseMass"))
		m_inverseMass = component["m_inverseMass"];
	if (component.contains("m_restitution"))
		m_restitution = component["m_restitution"];
	if (component.contains("m_velocity"))
		m_velocity = component["m_velocity"];
	if (component.contains("m_accel"))
		m_accel = component["m_accel"];
	if (component.contains("m_netForce"))
		m_netForce = component["m_netForce"];
}

void PlayerControllerComponent::PublicSerialise(nlohmann::json& json) const
{
	json["m_joystickVirtualButton"] = m_joystickVirtualButton;
	json["m_interactVirtualButton"] = m_interactVirtualButton;
	json["m_movementSpeed"] = m_movementSpeed;
}

void PlayerControllerComponent::PublicDeserialise(const nlohmann::json& component)
{
	if (component.contains("m_joystickVirtualButton"))
		m_joystickVirtualButton = component["m_joystickVirtualButton"];
	if (component.contains("m_interactVirtualButton"))
		m_interactVirtualButton = component["m_interactVirtualButton"];
	if (component.contains("m_movementSpeed"))
		m_movementSpeed = component["m_movementSpeed"];
}

void PostProcessRenderComponent::PublicSerialise(nlohmann::json& json) const
{
}

void PostProcessRenderComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void RenderComponent::PublicSerialise(nlohmann::json& json) const
{
}

void RenderComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void RotatorComponent::PublicSerialise(nlohmann::json& json) const
{
	json["m_DeltaRotation"] = m_DeltaRotation;
}

void RotatorComponent::PublicDeserialise(const nlohmann::json& component)
{
	if (component.contains("m_DeltaRotation"))
		m_DeltaRotation = component["m_DeltaRotation"];
}

void SpriteRenderComponent::PublicSerialise(nlohmann::json& json) const
{
	json["m_texturePath"] = m_texturePath;
}

void SpriteRenderComponent::PublicDeserialise(const nlohmann::json& component)
{
	if (component.contains("m_texturePath"))
		m_texturePath = component["m_texturePath"];
}

void SteeringBehaviourComponent::PublicSerialise(nlohmann::json& json) const
{
}

void SteeringBehaviourComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void TextRenderComponent::PublicSerialise(nlohmann::json& json) const
{
}

void TextRenderComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void TilemapRenderComponent::PublicSerialise(nlohmann::json& json) const
{
}

void TilemapRenderComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void TimerManager::PublicSerialise(nlohmann::json& json) const
{
}

void TimerManager::PublicDeserialise(const nlohmann::json& component)
{
}

void TransformComponent::PublicSerialise(nlohmann::json& json) const
{
	json["m_position"] = m_position;
	json["m_scale"] = m_scale;
	json["m_angle"] = m_angle;
	json["m_pivot"] = m_pivot;
	json["m_width"] = m_width;
	json["m_height"] = m_height;
}

void TransformComponent::PublicDeserialise(const nlohmann::json& component)
{
	if (component.contains("m_position"))
		m_position = component["m_position"];
	if (component.contains("m_scale"))
		m_scale = component["m_scale"];
	if (component.contains("m_angle"))
		m_angle = component["m_angle"];
	if (component.contains("m_pivot"))
		m_pivot = component["m_pivot"];
	if (component.contains("m_width"))
		m_width = component["m_width"];
	if (component.contains("m_height"))
		m_height = component["m_height"];
}

void UnusedClearComponent::PublicSerialise(nlohmann::json& json) const
{
}

void UnusedClearComponent::PublicDeserialise(const nlohmann::json& component)
{
}

void VirtualButtonComponent::PublicSerialise(nlohmann::json& json) const
{
	json["m_isJoystick"] = m_isJoystick;
}

void VirtualButtonComponent::PublicDeserialise(const nlohmann::json& component)
{
	if (component.contains("m_isJoystick"))
		m_isJoystick = component["m_isJoystick"];
}

