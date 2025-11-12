void func_001a39d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001a39d0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a39d8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a39e8: addu.qb $zero, $sp, $s1
    func_001a31e0();  // 0x1a31d0                                // 0x001a39f4: jal 0x1a31d0
    a1 = 2;                                                     // 0x001a39fc: addiu $a1, $zero, 2
    func_001a32e0();  // 0x1a3230                                // 0x001a3a00: jal 0x1a3230
    if (v0 != 0) goto label_0x1a3a18;                           // 0x001a3a08: bnez $v0, 0x1a3a18
    /* nop */                                                   // 0x001a3a0c: nop 
    goto label_0x1a3ab0;                                        // 0x001a3a10: b 0x1a3ab0
label_0x1a3a18:
    v0 = *(int32_t*)((v0) + 4);                                 // 0x001a3a18: lw $v0, 4($v0)
    at = ((unsigned)s1 < (unsigned)v0) ? 1 : 0;                 // 0x001a3a1c: sltu $at, $s1, $v0
    if (at != 0) goto label_0x1a3a30;                           // 0x001a3a20: bnez $at, 0x1a3a30
    goto label_0x1a3ab0;                                        // 0x001a3a28: b 0x1a3ab0
label_0x1a3a30:
    func_001a2ef0();  // 0x1a2e50                                // 0x001a3a30: jal 0x1a2e50
    if (v0 != 0) goto label_0x1a3a48;                           // 0x001a3a38: bnez $v0, 0x1a3a48
    goto label_0x1a3ab0;                                        // 0x001a3a40: b 0x1a3ab0
label_0x1a3a48:
    v1 = *(int32_t*)(s0);                                       // 0x001a3a48: lw $v1, 0($s0)
    v0 = 4;                                                     // 0x001a3a4c: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x1a3a98;                          // 0x001a3a50: beq $v1, $v0, 0x1a3a98
    v0 = 8;                                                     // 0x001a3a58: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x1a3a90;                          // 0x001a3a5c: beq $v1, $v0, 0x1a3a90
    v0 = 7;                                                     // 0x001a3a64: addiu $v0, $zero, 7
    if (v1 == v0) goto label_0x1a3a8c;                          // 0x001a3a68: beq $v1, $v0, 0x1a3a8c
    v0 = 6;                                                     // 0x001a3a6c: addiu $v0, $zero, 6
    if (v1 == v0) goto label_0x1a3a8c;                          // 0x001a3a70: beq $v1, $v0, 0x1a3a8c
    /* nop */                                                   // 0x001a3a74: nop 
    v0 = 3;                                                     // 0x001a3a78: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1a3a8c;                          // 0x001a3a7c: beq $v1, $v0, 0x1a3a8c
    /* nop */                                                   // 0x001a3a80: nop 
    goto label_0x1a3ab0;                                        // 0x001a3a84: b 0x1a3ab0
label_0x1a3a8c:
label_0x1a3a90:
    goto label_0x1a3ab4;                                        // 0x001a3a90: b 0x1a3ab4
label_0x1a3a98:
    func_001a3140();  // 0x1a30f0                                // 0x001a3a98: jal 0x1a30f0
    *(uint16_t*)((s3) + 0x20) = v0;                             // 0x001a3aa4: sh $v0, 0x20($s3)
    func_001a3b20();  // 0x1a3ad0                                // 0x001a3aa8: jal 0x1a3ad0
label_0x1a3ab0:
label_0x1a3ab4:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a3ab8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a3abc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a3ac0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a3ac4: jr $ra
    sp = sp + 0x50;                                             // 0x001a3ac8: addiu $sp, $sp, 0x50
}