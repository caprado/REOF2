void func_0015d300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = a0 + 0x158;                                            // 0x0015d300: addiu $a0, $a0, 0x158
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x0015d304: lw $v1, 0xc($a0)
    v0 = *(int32_t*)((a0) + 4);                                 // 0x0015d308: lw $v0, 4($a0)
    v1 = v1 + a1;                                               // 0x0015d30c: addu $v1, $v1, $a1
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0015d310: sltu $v0, $v0, $v1
    if (v0 != 0) goto label_0x15d32c;                           // 0x0015d314: bnez $v0, 0x15d32c
    a2 = *(int32_t*)((a0) + 8);                                 // 0x0015d31c: lw $a2, 8($a0)
    *(uint32_t*)((a0) + 0xc) = v1;                              // 0x0015d320: sw $v1, 0xc($a0)
    v0 = a2 + a1;                                               // 0x0015d324: addu $v0, $a2, $a1
    *(uint32_t*)((a0) + 8) = v0;                                // 0x0015d328: sw $v0, 8($a0)
label_0x15d32c:
    return;                                                     // 0x0015d32c: jr $ra
}