void func_0019e900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 == 0) goto label_0x19e914;                           // 0x0019e900: beqz $a0, 0x19e914
    a2 = *(int32_t*)((a0) + 4);                                 // 0x0019e908: lw $a2, 4($a0)
    goto label_0x19e930;                                        // 0x0019e90c: b 0x19e930
    *(uint32_t*)((a0) + 4) = a1;                                // 0x0019e910: sw $a1, 4($a0)
label_0x19e914:
    v1 = *(int32_t*)((gp) + -0x647c);                           // 0x0019e914: lw $v1, -0x647c($gp)
    if (v1 != 0) goto label_0x19e928;                           // 0x0019e918: bnez $v1, 0x19e928
    /* nop */                                                   // 0x0019e91c: nop 
    goto label_0x19e930;                                        // 0x0019e920: b 0x19e930
    *(uint32_t*)((gp) + -0x647c) = a1;                          // 0x0019e924: sw $a1, -0x647c($gp)
label_0x19e928:
    *(uint32_t*)((gp) + -0x647c) = a1;                          // 0x0019e92c: sw $a1, -0x647c($gp)
label_0x19e930:
    *(uint32_t*)(a1) = a0;                                      // 0x0019e930: sw $a0, 0($a1)
    if (a2 == 0) goto label_0x19e940;                           // 0x0019e934: beqz $a2, 0x19e940
    *(uint32_t*)((a1) + 4) = a2;                                // 0x0019e938: sw $a2, 4($a1)
    *(uint32_t*)(a2) = a1;                                      // 0x0019e93c: sw $a1, 0($a2)
label_0x19e940:
    return;                                                     // 0x0019e940: jr $ra
    /* nop */                                                   // 0x0019e944: nop 
}