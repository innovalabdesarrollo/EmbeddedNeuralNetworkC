# Checklist MVP — Embedded Neural Network With C

Fecha de referencia: 2 nov 2026 (México).  
Fuente: `embedded-neural-network-with-c-spec-mvp.md`

Marca con `[x]` conforme se termine cada ítem.

---

## En alcance (spec MVP)

### Caso de uso: Red Neuronal Hola Mundo (Desarrollador)

- [x] Diagrama de clases de los componentes (`docs/diagrama-clases.md`)
- [x] Modelo de datos **Neurona** (pesos, sesgo, activación)
- [x] Componente **Capa** (agrupa neuronas)
- [x] Componente **RedNeuronal** (módulo reutilizable)
- [x] Simulación ejecutable Hola Mundo (`make run`)
- [x] Build mínimo con Makefile

### Actores (solo lo definido en el spec)

- [x] Rol **Desarrollador**: puede usar/simular el módulo (caso de uso único)
- [ ] Rol **Administrador**: sin casos de uso ni permisos definidos en el spec — *pendiente de definir o excluir*

### Épica General

- [x] Flujo principal: crear componentes → simular red
- [ ] Cerrar épica cuando el Administrador quede resuelto (definir o marcar fuera de alcance)

---

## Fuera de alcance (no está en el spec MVP)

No implementar en este MVP salvo que se amplíe la especificación:

- Persistencia / base de datos (MongoDB u otra)
- API REST o servicios en red
- Entrenamiento / backpropagation / datasets
- UI, dashboard o panel de administración
- Autenticación, roles reales o multi-usuario
- Despliegue embebido en MCU / RTOS (el nombre sugiere “embedded”, el spec solo pide módulo C++)
- Exportar/importar modelos a archivo
- Tests automatizados, CI/CD, empaquetado de librería (`.a` / CMake install)
- Documentación extensa de producto

---

## ¿Necesitamos una BD?

**No para este MVP.**

El spec define un **módulo C++ en memoria** (Neurona → Capa → RedNeuronal) para reutilizar en otros proyectos. No hay CRUD, usuarios, historial ni persistencia de pesos.

Tu dirección de **MongoDB** se puede guardar para una fase posterior (por ejemplo guardar topologías o resultados de simulación), pero **integrarla ahora sería salir del scope** del MVP actual.

Si más adelante el Administrador implica “gestionar redes guardadas”, ahí sí tendría sentido Mongo — y habría que ampliar el spec primero.
