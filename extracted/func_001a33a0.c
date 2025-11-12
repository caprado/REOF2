void func_001a33a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a33a0: addiu $sp, $sp, -0x10
    a1 = 5;                                                     // 0x001a33ac: addiu $a1, $zero, 5
    func_001a32e0();  // 0x1a3230                                // 0x001a33b0: jal 0x1a3230
    if (v0 != 0) goto label_0x1a33c8;                           // 0x001a33b8: bnez $v0, 0x1a33c8
    /* nop */                                                   // 0x001a33bc: nop 
    goto label_0x1a340c;                                        // 0x001a33c0: b 0x1a340c
    v0 = -1;                                                    // 0x001a33c4: addiu $v0, $zero, -1
label_0x1a33c8:
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001a33c8: lw $v1, 4($v0)
    at = ((unsigned)t0 < (unsigned)v1) ? 1 : 0;                 // 0x001a33cc: sltu $at, $t0, $v1
    if (at != 0) goto label_0x1a33e0;                           // 0x001a33d0: bnez $at, 0x1a33e0
    /* nop */                                                   // 0x001a33d4: nop 
    goto label_0x1a340c;                                        // 0x001a33d8: b 0x1a340c
    v0 = -1;                                                    // 0x001a33dc: addiu $v0, $zero, -1
label_0x1a33e0:
    v0 = v0 + 0xc;                                              // 0x001a33e0: addiu $v0, $v0, 0xc
    goto label_0x1a33f8;                                        // 0x001a33e4: b 0x1a33f8
label_0x1a33ec:
    v1 = *(int32_t*)((v0) + 8);                                 // 0x001a33ec: lw $v1, 8($v0)
    a0 = a0 + 1;                                                // 0x001a33f0: addiu $a0, $a0, 1
    v0 = v0 + v1;                                               // 0x001a33f4: addu $v0, $v0, $v1
label_0x1a33f8:
    v1 = (a0 < t0) ? 1 : 0;                                     // 0x001a33f8: slt $v1, $a0, $t0
    /* nop */                                                   // 0x001a33fc: nop 
    if (v1 != 0) goto label_0x1a33ec;                           // 0x001a3400: bnez $v1, 0x1a33ec
    /* nop */                                                   // 0x001a3404: nop 
    v0 = *(int32_t*)((v0) + 4);                                 // 0x001a3408: lw $v0, 4($v0)
label_0x1a340c:
    return;                                                     // 0x001a3410: jr $ra
    sp = sp + 0x10;                                             // 0x001a3414: addiu $sp, $sp, 0x10
}