void func_00192810() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x192814:
    v0 = *(int32_t*)(a1);                                       // 0x00192814: lw $v0, 0($a1)
    *(uint32_t*)((a0) + 0xd8) = v0;                             // 0x00192818: sw $v0, 0xd8($a0)
    v0 = *(int32_t*)((gp) + -0x7d70);                           // 0x0019281c: lw $v0, -0x7d70($gp)
    *(uint32_t*)((a0) + 0xd4) = v0;                             // 0x00192820: sw $v0, 0xd4($a0)
    v0 = *(int32_t*)((a0) + 0xd0);                              // 0x00192824: lw $v0, 0xd0($a0)
    if (v0 == 0) goto label_0x192838;                           // 0x00192828: beqz $v0, 0x192838
    a1 = a1 + 4;                                                // 0x0019282c: addiu $a1, $a1, 4
    goto label_0x192814;                                        // 0x00192830: b 0x192814
label_0x192838:
    v0 = *(int32_t*)((a0) + 0xcc);                              // 0x00192838: lw $v0, 0xcc($a0)
    if (v0 == 0) goto label_0x192864;                           // 0x0019283c: beqz $v0, 0x192864
    /* nop */                                                   // 0x00192840: nop 
    goto label_0x192814;                                        // 0x00192844: b 0x192814
label_0x19284c:
    v0 = *(int32_t*)((a0) + 0xcc);                              // 0x0019284c: lw $v0, 0xcc($a0)
    if (v0 == 0) goto label_0x192860;                           // 0x00192850: beqz $v0, 0x192860
    /* nop */                                                   // 0x00192854: nop 
    goto label_0x192814;                                        // 0x00192858: b 0x192814
label_0x192860:
    a0 = *(int32_t*)((a0) + 0xc8);                              // 0x00192860: lw $a0, 0xc8($a0)
label_0x192864:
    if (a0 != v1) goto label_0x19284c;                          // 0x00192864: bne $a0, $v1, 0x19284c
    v0 = 1;                                                     // 0x00192868: addiu $v0, $zero, 1
    return;                                                     // 0x0019286c: jr $ra
    /* nop */                                                   // 0x00192870: nop 
}