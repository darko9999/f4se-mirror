Scriptname Weapon extends Form Native Hidden

; Fire this weapon base object from the specified source
Function Fire(ObjectReference akSource, Ammo akAmmo = None) native

; Get the ammo for this weapon base object
Ammo Function GetAmmo() native

; F4SE additions built 2019-03-14 04:47:05.463000 UTC

; Gets/sets the weapons embedded mod
ObjectMod Function GetEmbeddedMod() native
Function SetEmbeddedMod(ObjectMod mod) native

InstanceData:Owner Function GetInstanceOwner()
	InstanceData:Owner inst = new InstanceData:Owner
	inst.owner = self
	return inst
EndFunction