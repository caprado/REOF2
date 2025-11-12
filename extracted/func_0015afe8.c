void func_0015afe8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x0015afe8: lui $v0, 0x25
    a2 = 0x21 << 16;                                            // 0x0015afec: lui $a2, 0x21
    v1 = g_00256440;  // Global at 0x00256440                   // 0x0015aff0: lw $v1, 0x6440($v0)
    v0 = v1 + 0x20;                                             // 0x0015aff4: addiu $v0, $v1, 0x20
    a1 = v1 + 0x60;                                             // 0x0015aff8: addiu $a1, $v1, 0x60
    *(uint32_t*)((a0) + 0x2c) = v0;                             // 0x0015affc: sw $v0, 0x2c($a0)
    *(uint32_t*)((a0) + 0x34) = a1;                             // 0x0015b000: sw $a1, 0x34($a0)
    *(uint32_t*)((a0) + 0x30) = v1;                             // 0x0015b004: sw $v1, 0x30($a0)
    v0 = g_00213edc;  // Global at 0x00213edc                   // 0x0015b008: lw $v0, 0x3edc($a2)
    *(uint32_t*)((a0) + 0x110) = v0;                            // 0x0015b00c: sw $v0, 0x110($a0)
    return;                                                     // 0x0015b010: jr $ra
    *(uint32_t*)((a0) + 0x40) = v0;                             // 0x0015b014: sw $v0, 0x40($a0)
}