void func_001a3620() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a3620: addiu $sp, $sp, -0x10
    func_001a3320();  // 0x1a32e0                                // 0x001a3630: jal 0x1a32e0
    at = (v0 < t2) ? 1 : 0;                                     // 0x001a3638: slt $at, $v0, $t2
    if (at == 0) goto label_0x1a364c;                           // 0x001a363c: beqz $at, 0x1a364c
    goto label_0x1a36c8;                                        // 0x001a3644: b 0x1a36c8
    v0 = -1;                                                    // 0x001a3648: addiu $v0, $zero, -1
label_0x1a364c:
    a1 = 5;                                                     // 0x001a364c: addiu $a1, $zero, 5
    func_001a32e0();  // 0x1a3230                                // 0x001a3650: jal 0x1a3230
    if (v0 != 0) goto label_0x1a3668;                           // 0x001a3658: bnez $v0, 0x1a3668
    a0 = v0 + 0xc;                                              // 0x001a365c: addiu $a0, $v0, 0xc
    goto label_0x1a36c8;                                        // 0x001a3660: b 0x1a36c8
    v0 = -1;                                                    // 0x001a3664: addiu $v0, $zero, -1
label_0x1a3668:
    goto label_0x1a367c;                                        // 0x001a3668: b 0x1a367c
label_0x1a3670:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a3670: lw $v0, 8($a0)
    v1 = v1 + 1;                                                // 0x001a3674: addiu $v1, $v1, 1
    a0 = a0 + v0;                                               // 0x001a3678: addu $a0, $a0, $v0
label_0x1a367c:
    v0 = (v1 < t2) ? 1 : 0;                                     // 0x001a367c: slt $v0, $v1, $t2
    /* nop */                                                   // 0x001a3680: nop 
    if (v0 != 0) goto label_0x1a3670;                           // 0x001a3684: bnez $v0, 0x1a3670
    /* nop */                                                   // 0x001a3688: nop 
    a1 = a0 + 0xc;                                              // 0x001a368c: addiu $a1, $a0, 0xc
    v1 = 0x8000 << 16;                                          // 0x001a3690: lui $v1, 0x8000
    goto label_0x1a36bc;                                        // 0x001a3694: b 0x1a36bc
label_0x1a369c:
    v0 = *(int32_t*)(a1);                                       // 0x001a369c: lw $v0, 0($a1)
    a0 = a0 + 1;                                                // 0x001a36a0: addiu $a0, $a0, 1
    t0 = v0 & v1;                                               // 0x001a36a4: and $t0, $v0, $v1
    v0 = v0 << 2;                                               // 0x001a36b0: sll $v0, $v0, 2
    v0 = v0 + 4;                                                // 0x001a36b4: addiu $v0, $v0, 4
    a1 = a1 + v0;                                               // 0x001a36b8: addu $a1, $a1, $v0
label_0x1a36bc:
    at = (t1 < a0) ? 1 : 0;                                     // 0x001a36bc: slt $at, $t1, $a0
    if (at == 0) goto label_0x1a369c;                           // 0x001a36c0: beqz $at, 0x1a369c
    v0 = ((unsigned)0 < (unsigned)t0) ? 1 : 0;                  // 0x001a36c4: sltu $v0, $zero, $t0
label_0x1a36c8:
    return;                                                     // 0x001a36cc: jr $ra
    sp = sp + 0x10;                                             // 0x001a36d0: addiu $sp, $sp, 0x10
}