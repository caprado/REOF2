void func_00147bf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0xc;                                                   // 0x00147bf0: addiu $v0, $zero, 0xc
    t0 = *(int32_t*)((a0) + 0x40);                              // 0x00147bf4: lw $t0, 0x40($a0)
    v1 = t0 + 0xc;                                              // 0x00147bfc: addiu $v1, $t0, 0xc
    v1 = v1 + a1;                                               // 0x00147c00: addu $v1, $v1, $a1
    a0 = t0 + a1;                                               // 0x00147c04: addu $a0, $t0, $a1
    v0 = *(int32_t*)(v1);                                       // 0x00147c08: lw $v0, 0($v1)
    *(uint32_t*)(v1) = a2;                                      // 0x00147c0c: sw $a2, 0($v1)
    *(uint32_t*)((a0) + 0x10) = a3;                             // 0x00147c10: sw $a3, 0x10($a0)
    return;                                                     // 0x00147c1c: jr $ra
    *(uint32_t*)((t0) + 0x14) = v1;                             // 0x00147c20: sw $v1, 0x14($t0)
}