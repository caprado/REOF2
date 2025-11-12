void func_00192a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a2 & 0xffff;                                           // 0x00192a20: andi $v1, $a2, 0xffff
label_0x192a28:
    v0 = *(uint16_t*)((a0) + 0xc6);                             // 0x00192a28: lhu $v0, 0xc6($a0)
    if (v0 != v1) goto label_0x192a58;                          // 0x00192a2c: bne $v0, $v1, 0x192a58
    /* nop */                                                   // 0x00192a30: nop 
    v0 = *(int32_t*)((gp) + -0x7d70);                           // 0x00192a34: lw $v0, -0x7d70($gp)
    *(uint32_t*)((a0) + 0xd4) = v0;                             // 0x00192a38: sw $v0, 0xd4($a0)
    v0 = *(int32_t*)(a1);                                       // 0x00192a3c: lw $v0, 0($a1)
    *(uint32_t*)((a0) + 0xd8) = v0;                             // 0x00192a40: sw $v0, 0xd8($a0)
    v0 = *(int32_t*)((a0) + 0xd0);                              // 0x00192a44: lw $v0, 0xd0($a0)
    if (v0 == 0) goto label_0x192a58;                           // 0x00192a48: beqz $v0, 0x192a58
    a1 = a1 + 4;                                                // 0x00192a4c: addiu $a1, $a1, 4
    goto label_0x192a28;                                        // 0x00192a50: b 0x192a28
label_0x192a58:
    v0 = *(int32_t*)((a0) + 0xcc);                              // 0x00192a58: lw $v0, 0xcc($a0)
    if (v0 == 0) goto label_0x192a98;                           // 0x00192a5c: beqz $v0, 0x192a98
    /* nop */                                                   // 0x00192a60: nop 
    if (a0 == a2) goto label_0x192a98;                          // 0x00192a64: beq $a0, $a2, 0x192a98
    /* nop */                                                   // 0x00192a68: nop 
    goto label_0x192a28;                                        // 0x00192a6c: b 0x192a28
label_0x192a74:
    v0 = *(uint16_t*)((v0) + 0xc6);                             // 0x00192a78: lhu $v0, 0xc6($v0)
    if (v0 == v1) goto label_0x192a28;                          // 0x00192a7c: beq $v0, $v1, 0x192a28
    /* nop */                                                   // 0x00192a80: nop 
label_0x192a84:
    v0 = *(int32_t*)((a0) + 0xcc);                              // 0x00192a84: lw $v0, 0xcc($a0)
    /* nop */                                                   // 0x00192a88: nop 
    if (v0 != 0) goto label_0x192a74;                           // 0x00192a8c: bnez $v0, 0x192a74
    /* nop */                                                   // 0x00192a90: nop 
    a0 = *(int32_t*)((a0) + 0xc8);                              // 0x00192a94: lw $a0, 0xc8($a0)
label_0x192a98:
    if (a0 != a2) goto label_0x192a84;                          // 0x00192a98: bne $a0, $a2, 0x192a84
    /* nop */                                                   // 0x00192a9c: nop 
    v0 = 1;                                                     // 0x00192aa0: addiu $v0, $zero, 1
    return;                                                     // 0x00192aa4: jr $ra
    /* nop */                                                   // 0x00192aa8: nop 
}