void func_00192ab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a1 & 0xffff;                                           // 0x00192ab0: andi $v1, $a1, 0xffff
label_0x192ab8:
    v0 = *(uint16_t*)((a0) + 0xc6);                             // 0x00192ab8: lhu $v0, 0xc6($a0)
    if (v0 != v1) goto label_0x192acc;                          // 0x00192abc: bne $v0, $v1, 0x192acc
    goto label_0x192b14;                                        // 0x00192ac4: b 0x192b14
    /* nop */                                                   // 0x00192ac8: nop 
label_0x192acc:
    v0 = *(int32_t*)((a0) + 0xd0);                              // 0x00192acc: lw $v0, 0xd0($a0)
    if (v0 == 0) goto label_0x192ae0;                           // 0x00192ad0: beqz $v0, 0x192ae0
    /* nop */                                                   // 0x00192ad4: nop 
    goto label_0x192ab8;                                        // 0x00192ad8: b 0x192ab8
label_0x192ae0:
    v0 = *(int32_t*)((a0) + 0xcc);                              // 0x00192ae0: lw $v0, 0xcc($a0)
    if (v0 == 0) goto label_0x192b0c;                           // 0x00192ae4: beqz $v0, 0x192b0c
    /* nop */                                                   // 0x00192ae8: nop 
    goto label_0x192ab8;                                        // 0x00192aec: b 0x192ab8
label_0x192af4:
    v0 = *(int32_t*)((a0) + 0xcc);                              // 0x00192af4: lw $v0, 0xcc($a0)
    if (v0 == 0) goto label_0x192b08;                           // 0x00192af8: beqz $v0, 0x192b08
    /* nop */                                                   // 0x00192afc: nop 
    goto label_0x192ab8;                                        // 0x00192b00: b 0x192ab8
label_0x192b08:
    a0 = *(int32_t*)((a0) + 0xc8);                              // 0x00192b08: lw $a0, 0xc8($a0)
label_0x192b0c:
    if (a0 != a1) goto label_0x192af4;                          // 0x00192b0c: bne $a0, $a1, 0x192af4
label_0x192b14:
    return;                                                     // 0x00192b14: jr $ra
    /* nop */                                                   // 0x00192b18: nop 
}