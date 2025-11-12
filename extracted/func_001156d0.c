void func_001156d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a1) + 4);                                 // 0x001156d4: lw $v0, 4($a1)
    a0 = *(int32_t*)((a1) + 8);                                 // 0x001156d8: lw $a0, 8($a1)
    v1 = *(int32_t*)(a1);                                       // 0x001156dc: lw $v1, 0($a1)
    v0 = v0 + -1;                                               // 0x001156e0: addiu $v0, $v0, -1
    a0 = a0 + 1;                                                // 0x001156e4: addiu $a0, $a0, 1
    *(uint32_t*)((a1) + 4) = v0;                                // 0x001156e8: sw $v0, 4($a1)
    v1 = v1 + 0x10;                                             // 0x001156ec: addiu $v1, $v1, 0x10
    v1 = a1 + v1;                                               // 0x001156f0: addu $v1, $a1, $v1
    if (a0 != v1) goto label_0x115704;                          // 0x001156f4: bne $a0, $v1, 0x115704
    *(uint32_t*)((a1) + 8) = a0;                                // 0x001156f8: sw $a0, 8($a1)
    v0 = a1 + 0x10;                                             // 0x001156fc: addiu $v0, $a1, 0x10
    *(uint32_t*)((a1) + 8) = v0;                                // 0x00115700: sw $v0, 8($a1)
label_0x115704:
    return;                                                     // 0x00115704: jr $ra
    /* nop */                                                   // 0x00115708: nop 
}