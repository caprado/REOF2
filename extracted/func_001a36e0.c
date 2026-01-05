void func_001a36e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a36e0: addiu $sp, $sp, -0x10
    func_001a32e0();  // 1a32e0                                // 0x001a36f4: jal 0x1a32e0
    at = (v0 < t2) ? 1 : 0;                                     // 0x001a36fc: slt $at, $v0, $t2
    if (at == 0) goto label_0x1a3710;                           // 0x001a3700: beqz $at, 0x1a3710
    goto label_0x1a37b0;                                        // 0x001a3708: b 0x1a37b0
    v0 = -1;                                                    // 0x001a370c: addiu $v0, $zero, -1
label_0x1a3710:
    a1 = 5;                                                     // 0x001a3710: addiu $a1, $zero, 5
    func_001a3230();  // 1a3230                                // 0x001a3714: jal 0x1a3230
    if (v0 != 0) goto label_0x1a372c;                           // 0x001a371c: bnez $v0, 0x1a372c
    a0 = v0 + 0xc;                                              // 0x001a3720: addiu $a0, $v0, 0xc
    goto label_0x1a37b0;                                        // 0x001a3724: b 0x1a37b0
    v0 = -1;                                                    // 0x001a3728: addiu $v0, $zero, -1
label_0x1a372c:
    goto label_0x1a3740;                                        // 0x001a372c: b 0x1a3740
label_0x1a3734:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a3734: lw $v0, 8($a0)
    v1 = v1 + 1;                                                // 0x001a3738: addiu $v1, $v1, 1
    a0 = a0 + v0;                                               // 0x001a373c: addu $a0, $a0, $v0
label_0x1a3740:
    v0 = (v1 < t2) ? 1 : 0;                                     // 0x001a3740: slt $v0, $v1, $t2
    /* nop */                                                   // 0x001a3744: nop 
    if (v0 != 0) goto label_0x1a3734;                           // 0x001a3748: bnez $v0, 0x1a3734
    /* nop */                                                   // 0x001a374c: nop 
    a0 = a0 + 0xc;                                              // 0x001a3750: addiu $a0, $a0, 0xc
    goto label_0x1a3778;                                        // 0x001a3754: b 0x1a3778
label_0x1a375c:
    v0 = *(int32_t*)(a0);                                       // 0x001a375c: lw $v0, 0($a0)
    v1 = v1 + 1;                                                // 0x001a3760: addiu $v1, $v1, 1
    v0 = v0 << 2;                                               // 0x001a376c: sll $v0, $v0, 2
    v0 = v0 + 4;                                                // 0x001a3770: addiu $v0, $v0, 4
    a0 = a0 + v0;                                               // 0x001a3774: addu $a0, $a0, $v0
label_0x1a3778:
    v0 = (v1 < t1) ? 1 : 0;                                     // 0x001a3778: slt $v0, $v1, $t1
    if (v0 != 0) goto label_0x1a375c;                           // 0x001a377c: bnez $v0, 0x1a375c
    /* nop */                                                   // 0x001a3780: nop 
    v0 = *(int32_t*)(a0);                                       // 0x001a3784: lw $v0, 0($a0)
    v0 = (t0 < v0) ? 1 : 0;                                     // 0x001a3790: slt $v0, $t0, $v0
    if (v0 != 0) goto label_0x1a37a4;                           // 0x001a3794: bnez $v0, 0x1a37a4
    v1 = a0 + 4;                                                // 0x001a3798: addiu $v1, $a0, 4
    goto label_0x1a37b0;                                        // 0x001a379c: b 0x1a37b0
    v0 = -1;                                                    // 0x001a37a0: addiu $v0, $zero, -1
label_0x1a37a4:
    v0 = t0 << 2;                                               // 0x001a37a4: sll $v0, $t0, 2
    v0 = v1 + v0;                                               // 0x001a37a8: addu $v0, $v1, $v0
    v0 = *(int32_t*)(v0);                                       // 0x001a37ac: lw $v0, 0($v0)
label_0x1a37b0:
    return;                                                     // 0x001a37b4: jr $ra
    sp = sp + 0x10;                                             // 0x001a37b8: addiu $sp, $sp, 0x10
}