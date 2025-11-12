void func_00189b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00189b70: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x00189b78: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00189b84: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((gp) + -0x64c0);                           // 0x00189b90: lw $v1, -0x64c0($gp)
    goto label_0x189bb8;                                        // 0x00189b94: b 0x189bb8
label_0x189b9c:
    v0 = v0 + s2;                                               // 0x00189b9c: addu $v0, $v0, $s2
    v0 = v0 << 7;                                               // 0x00189ba0: sll $v0, $v0, 7
    v0 = v1 + v0;                                               // 0x00189ba4: addu $v0, $v1, $v0
    v0 = *(int32_t*)((v0) + 4);                                 // 0x00189ba8: lw $v0, 4($v0)
    if (v0 == 0) goto label_0x189bc8;                           // 0x00189bac: beqz $v0, 0x189bc8
    v0 = s2 << 1;                                               // 0x00189bb0: sll $v0, $s2, 1
    s2 = s2 + 1;                                                // 0x00189bb4: addiu $s2, $s2, 1
label_0x189bb8:
    v0 = ((unsigned)s2 < (unsigned)0x280) ? 1 : 0;              // 0x00189bb8: sltiu $v0, $s2, 0x280
    if (v0 != 0) goto label_0x189b9c;                           // 0x00189bbc: bnez $v0, 0x189b9c
    v0 = s2 << 1;                                               // 0x00189bc0: sll $v0, $s2, 1
    v0 = s2 << 1;                                               // 0x00189bc4: sll $v0, $s2, 1
label_0x189bc8:
    v0 = v0 + s2;                                               // 0x00189bcc: addu $v0, $v0, $s2
    a2 = 0x180;                                                 // 0x00189bd0: addiu $a2, $zero, 0x180
    v0 = v0 << 7;                                               // 0x00189bd4: sll $v0, $v0, 7
    s1 = v1 + v0;                                               // 0x00189bd8: addu $s1, $v1, $v0
    func_0018da10();  // 0x18d9e0                                // 0x00189bdc: jal 0x18d9e0
    v1 = *(int32_t*)(s3);                                       // 0x00189be4: lw $v1, 0($s3)
    v0 = s0 & 4;                                                // 0x00189be8: andi $v0, $s0, 4
    *(uint32_t*)((s1) + 4) = v1;                                // 0x00189bec: sw $v1, 4($s1)
    v1 = *(int32_t*)((s3) + 0xc);                               // 0x00189bf0: lw $v1, 0xc($s3)
    *(uint32_t*)((s1) + 8) = v1;                                // 0x00189bf4: sw $v1, 8($s1)
    *(uint32_t*)(s1) = s0;                                      // 0x00189bf8: sw $s0, 0($s1)
    *(uint32_t*)((s1) + 0x50) = 0;                              // 0x00189bfc: sw $zero, 0x50($s1)
    if (v0 != 0) goto label_0x189ca8;                           // 0x00189c00: bnez $v0, 0x189ca8
    *(uint32_t*)((s1) + 0x54) = 0;                              // 0x00189c04: sw $zero, 0x54($s1)
    v0 = 0x30;                                                  // 0x00189c08: addiu $v0, $zero, 0x30
    a0 = -0x10;                                                 // 0x00189c0c: addiu $a0, $zero, -0x10
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x00189c10: sw $v0, 0x10($s1)
    v1 = *(int32_t*)((s3) + 0x1c);                              // 0x00189c14: lw $v1, 0x1c($s3)
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x00189c18: lw $v0, 0x10($s1)
    v1 = v1 + 0xf;                                              // 0x00189c1c: addiu $v1, $v1, 0xf
    v1 = v1 & a0;                                               // 0x00189c20: and $v1, $v1, $a0
    v0 = v0 + v1;                                               // 0x00189c24: addu $v0, $v0, $v1
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x00189c28: sw $v0, 0x10($s1)
    v1 = *(int32_t*)((s3) + 0x18);                              // 0x00189c2c: lw $v1, 0x18($s3)
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x00189c30: lw $v0, 0x10($s1)
    v1 = v1 + 0xf;                                              // 0x00189c34: addiu $v1, $v1, 0xf
    v1 = v1 & a0;                                               // 0x00189c38: and $v1, $v1, $a0
    v0 = v0 + v1;                                               // 0x00189c3c: addu $v0, $v0, $v1
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x00189c40: sw $v0, 0x10($s1)
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x00189c44: lw $a0, 0x10($s1)
    thunk_func_001a0a20();  // 0x18dab0                          // 0x00189c48: jal 0x18dab0
    a1 = 3;                                                     // 0x00189c4c: addiu $a1, $zero, 3
    *(uint32_t*)((s1) + 0x14) = v0;                             // 0x00189c50: sw $v0, 0x14($s1)
    func_0018db10();  // 0x18db00                                // 0x00189c54: jal 0x18db00
    a0 = *(int32_t*)((s1) + 0x14);                              // 0x00189c58: lw $a0, 0x14($s1)
    func_0018da60();  // 0x18da10                                // 0x00189c68: jal 0x18da10
    a2 = 0x24;                                                  // 0x00189c6c: addiu $a2, $zero, 0x24
    a2 = *(int32_t*)((s3) + 0x1c);                              // 0x00189c70: lw $a2, 0x1c($s3)
    s0 = s0 + 0x30;                                             // 0x00189c74: addiu $s0, $s0, 0x30
    a1 = *(int32_t*)((s3) + 8);                                 // 0x00189c78: lw $a1, 8($s3)
    func_0018da60();  // 0x18da10                                // 0x00189c7c: jal 0x18da10
    v1 = *(int32_t*)((s3) + 0x1c);                              // 0x00189c84: lw $v1, 0x1c($s3)
    v0 = -0x10;                                                 // 0x00189c88: addiu $v0, $zero, -0x10
    a2 = *(int32_t*)((s3) + 0x18);                              // 0x00189c8c: lw $a2, 0x18($s3)
    a1 = *(int32_t*)((s3) + 0x10);                              // 0x00189c90: lw $a1, 0x10($s3)
    v1 = v1 + 0xf;                                              // 0x00189c94: addiu $v1, $v1, 0xf
    v0 = v1 & v0;                                               // 0x00189c98: and $v0, $v1, $v0
    s0 = s0 + v0;                                               // 0x00189c9c: addu $s0, $s0, $v0
    func_0018da60();  // 0x18da10                                // 0x00189ca0: jal 0x18da10
label_0x189ca8:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00189ca8: lw $v0, -0x6458($gp)
    func_00189db0();  // 0x189d00                                // 0x00189cb4: jal 0x189d00
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x00189cb8: sw $v0, 0xc($s1)
    if (v0 != 0) goto label_0x189cd4;                           // 0x00189cbc: bnez $v0, 0x189cd4
    a0 = s2 + 1;                                                // 0x00189cc0: addiu $a0, $s2, 1
    func_0018c490();  // 0x18c350                                // 0x00189cc4: jal 0x18c350
    /* nop */                                                   // 0x00189cc8: nop 
    goto label_0x189cd8;                                        // 0x00189ccc: b 0x189cd8
label_0x189cd4:
    v0 = s2 + 1;                                                // 0x00189cd4: addiu $v0, $s2, 1
label_0x189cd8:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00189ce0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00189ce4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00189ce8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00189cec: jr $ra
    sp = sp + 0x50;                                             // 0x00189cf0: addiu $sp, $sp, 0x50
}