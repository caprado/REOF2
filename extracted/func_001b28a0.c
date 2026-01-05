void func_001b28a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b28a0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b28a8: addu.qb $zero, $sp, $s1
    s1 = 0x2b << 16;                                            // 0x001b28b0: lui $s1, 0x2b
    s1 = s1 + -0x5700;                                          // 0x001b28b4: addiu $s1, $s1, -0x5700
    goto label_0x1b28d4;                                        // 0x001b28b8: b 0x1b28d4
label_0x1b28c0:
    v1 = s1 + v1;                                               // 0x001b28c0: addu $v1, $s1, $v1
    v1 = *(int32_t*)((v1) + 0x1c);                              // 0x001b28c4: lw $v1, 0x1c($v1)
    if (v1 == a0) goto label_0x1b28e4;                          // 0x001b28c8: beq $v1, $a0, 0x1b28e4
    v1 = 0x64;                                                  // 0x001b28cc: addiu $v1, $zero, 0x64
    s0 = s0 + 1;                                                // 0x001b28d0: addiu $s0, $s0, 1
label_0x1b28d4:
    v1 = (s0 < 0x64) ? 1 : 0;                                   // 0x001b28d4: slti $v1, $s0, 0x64
    if (v1 != 0) goto label_0x1b28c0;                           // 0x001b28d8: bnez $v1, 0x1b28c0
    v1 = s0 << 2;                                               // 0x001b28dc: sll $v1, $s0, 2
    v1 = 0x64;                                                  // 0x001b28e0: addiu $v1, $zero, 0x64
label_0x1b28e4:
    if (s0 == v1) goto label_0x1b292c;                          // 0x001b28e4: beq $s0, $v1, 0x1b292c
    v1 = s0 << 1;                                               // 0x001b28e8: sll $v1, $s0, 1
    v1 = v1 + s1;                                               // 0x001b28ec: addu $v1, $v1, $s1
    a1 = *(int16_t*)((v1) + 0x1ac);                             // 0x001b28f0: lh $a1, 0x1ac($v1)
    if (a1 == 0) goto label_0x1b292c;                           // 0x001b28f4: beqz $a1, 0x1b292c
    /* nop */                                                   // 0x001b28f8: nop 
    v1 = s0 << 2;                                               // 0x001b28fc: sll $v1, $s0, 2
    v0 = a1 << 3;                                               // 0x001b2900: sll $v0, $a1, 3
    v1 = v1 + s1;                                               // 0x001b2904: addu $v1, $v1, $s1
    v0 = v0 + a1;                                               // 0x001b2908: addu $v0, $v0, $a1
    a0 = *(int32_t*)((v1) + 0x1c);                              // 0x001b290c: lw $a0, 0x1c($v1)
    v0 = v0 << 1;                                               // 0x001b2910: sll $v0, $v0, 1
    v0 = v0 + a1;                                               // 0x001b2914: addu $v0, $v0, $a1
    func_00107c70();  // 107c70                                // 0x001b291c: jal 0x107c70
    a2 = v0 << 3;                                               // 0x001b2920: sll $a2, $v0, 3
    v1 = s0 + s1;                                               // 0x001b2924: addu $v1, $s0, $s1
    *(uint8_t*)((v1) + 0x274) = 0;                              // 0x001b2928: sb $zero, 0x274($v1)
label_0x1b292c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b2930: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b2934: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b2938: jr $ra
    sp = sp + 0x30;                                             // 0x001b293c: addiu $sp, $sp, 0x30
}