void func_0010b460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(uint8_t*)(a0);                                       // 0x0010b460: lbu $v1, 0($a0)
    a1 = a1 << 0x18;                                            // 0x0010b464: sll $a1, $a1, 0x18
    a1 = a1 >> 0x18;                                            // 0x0010b468: sra $a1, $a1, 0x18
    if (v1 == 0) goto label_0x10b498;                           // 0x0010b470: beqz $v1, 0x10b498
label_0x10b478:
    v0 = v0 << 0x18;                                            // 0x0010b478: sll $v0, $v0, 0x18
    v0 = v0 >> 0x18;                                            // 0x0010b47c: sra $v0, $v0, 0x18
    v0 = v0 ^ a1;                                               // 0x0010b480: xor $v0, $v0, $a1
    if (v0 == 0) a2 = a0;                                       // 0x0010b484: movz $a2, $a0, $v0
    a0 = a0 + 1;                                                // 0x0010b488: addiu $a0, $a0, 1
    v1 = *(uint8_t*)(a0);                                       // 0x0010b48c: lbu $v1, 0($a0)
    if (v1 != 0) goto label_0x10b478;                           // 0x0010b490: bnez $v1, 0x10b478
label_0x10b498:
    v1 = v1 << 0x18;                                            // 0x0010b498: sll $v1, $v1, 0x18
    v1 = v1 >> 0x18;                                            // 0x0010b4a0: sra $v1, $v1, 0x18
    v1 = v1 ^ a1;                                               // 0x0010b4a4: xor $v1, $v1, $a1
    return;                                                     // 0x0010b4a8: jr $ra
    if (v1 != 0) v0 = a2;                                       // 0x0010b4ac: movn $v0, $a2, $v1
}