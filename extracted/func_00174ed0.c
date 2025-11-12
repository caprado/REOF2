void func_00174ed0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a0 + 0x1aa0;                                           // 0x00174ed0: addiu $a1, $a0, 0x1aa0
    a2 = -1;                                                    // 0x00174ed4: addiu $a2, $zero, -1
    v1 = *(int32_t*)((a1) + 0x14);                              // 0x00174ed8: lw $v1, 0x14($a1)
    v0 = v1 << 3;                                               // 0x00174edc: sll $v0, $v1, 3
    v0 = v0 - v1;                                               // 0x00174ee0: subu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x00174ee4: sll $v0, $v0, 2
    v0 = v0 + v1;                                               // 0x00174ee8: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x00174eec: sll $v0, $v0, 2
    a0 = a0 + v0;                                               // 0x00174ef0: addu $a0, $a0, $v0
    v1 = *(int32_t*)((a0) + 0x1190);                            // 0x00174ef4: lw $v1, 0x1190($a0)
    v0 = v1 << 4;                                               // 0x00174ef8: sll $v0, $v1, 4
    v0 = v0 + v1;                                               // 0x00174efc: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x00174f00: sll $v0, $v0, 2
    a1 = a1 + v0;                                               // 0x00174f04: addu $a1, $a1, $v0
    v0 = *(int32_t*)((a1) + 0x20);                              // 0x00174f08: lw $v0, 0x20($a1)
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x00174f0c: slti $v1, $v0, 0
    return;                                                     // 0x00174f10: jr $ra
    if (v1 != 0) v0 = a2;                                       // 0x00174f14: movn $v0, $a2, $v1
}