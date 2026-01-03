void func_001b8950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001b8950: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b895c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b896c: addu.qb $zero, $sp, $s1
    if (s3 == 0) goto label_0x1b8a00;                           // 0x001b8970: beqz $s3, 0x1b8a00
    a1 = *(uint8_t*)((s4) + 2);                                 // 0x001b8978: lbu $a1, 2($s4)
    v1 = 3;                                                     // 0x001b897c: addiu $v1, $zero, 3
    if (a1 == v1) goto label_0x1b89d4;                          // 0x001b8980: beq $a1, $v1, 0x1b89d4
    v1 = 2;                                                     // 0x001b8988: addiu $v1, $zero, 2
    if (a1 == v1) goto label_0x1b89d4;                          // 0x001b898c: beq $a1, $v1, 0x1b89d4
    /* nop */                                                   // 0x001b8990: nop 
    a0 = 1;                                                     // 0x001b8994: addiu $a0, $zero, 1
    if (a1 == a0) goto label_0x1b8a00;                          // 0x001b8998: beq $a1, $a0, 0x1b8a00
    /* nop */                                                   // 0x001b899c: nop 
    if (a1 == 0) goto label_0x1b89b0;                           // 0x001b89a0: beqz $a1, 0x1b89b0
    /* nop */                                                   // 0x001b89a4: nop 
    goto label_0x1b89e4;                                        // 0x001b89a8: b 0x1b89e4
label_0x1b89b0:
    s1 = *(uint8_t*)((s4) + 3);                                 // 0x001b89b0: lbu $s1, 3($s4)
    if (a2 != a0) goto label_0x1b89e0;                          // 0x001b89b4: bne $a2, $a0, 0x1b89e0
    s2 = s1 + 8;                                                // 0x001b89b8: addiu $s2, $s1, 8
    func_001ae5c0();  // 1ae5c0                                // 0x001b89bc: jal 0x1ae5c0
    /* nop */                                                   // 0x001b89c0: nop 
    v0 = v0 & 0xffff;                                           // 0x001b89c4: andi $v0, $v0, 0xffff
    v0 = v0 & 1;                                                // 0x001b89c8: andi $v0, $v0, 1
    goto label_0x1b89e0;                                        // 0x001b89cc: b 0x1b89e0
    s3 = s3 + v0;                                               // 0x001b89d0: addu $s3, $s3, $v0
label_0x1b89d4:
    s1 = *(uint8_t*)((s4) + 0x550);                             // 0x001b89d4: lbu $s1, 0x550($s4)
    s2 = 0xc;                                                   // 0x001b89d8: addiu $s2, $zero, 0xc
    s0 = *(uint8_t*)((s4) + 0x33);                              // 0x001b89dc: lbu $s0, 0x33($s4)
label_0x1b89e0:
label_0x1b89e4:
    a3 = s4 + 0x38;                                             // 0x001b89ec: addiu $a3, $s4, 0x38
    t0 = 1;                                                     // 0x001b89f4: addiu $t0, $zero, 1
    func_001b8b40();  // 1b8b40                                // 0x001b89f8: jal 0x1b8b40
label_0x1b8a00:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b8a04: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b8a0c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b8a10: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b8a14: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b8a18: jr $ra
    sp = sp + 0x60;                                             // 0x001b8a1c: addiu $sp, $sp, 0x60
}