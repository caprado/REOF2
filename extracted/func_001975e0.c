void func_001975e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001975e0: addiu $sp, $sp, -0x30
    v0 = a0 & 0x8000;                                           // 0x001975e4: andi $v0, $a0, 0x8000
    v0 = v0 ^ 0x8000;                                           // 0x001975ec: xori $v0, $v0, 0x8000
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001975f0: addu.qb $zero, $sp, $s1
    v1 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001975f4: sltu $v1, $zero, $v0
    at = 0x29 << 16;                                            // 0x00197600: lui $at, 0x29
    v0 = 2;                                                     // 0x00197604: addiu $v0, $zero, 2
    a1 = g_0028ffb0;  // Global at 0x0028ffb0                   // 0x00197608: lw $a1, -0x50($at)
    at = 0x29 << 16;                                            // 0x00197610: lui $at, 0x29
    a1 = (unsigned)a1 >> 5;                                     // 0x00197614: srl $a1, $a1, 5
    a0 = g_0028ffa4;  // Global at 0x0028ffa4                   // 0x00197618: lw $a0, -0x5c($at)
    a0 = a1 | a0;                                               // 0x00197628: or $a0, $a1, $a0
    if (s1 == v0) goto label_0x197648;                          // 0x0019762c: beq $s1, $v0, 0x197648
    s0 = v1 | a0;                                               // 0x00197630: or $s0, $v1, $a0
    a0 = 0x30;                                                  // 0x00197634: addiu $a0, $zero, 0x30
    func_0018dc30();  // 18dc30                                // 0x00197638: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019763c: addiu $a1, $zero, 0x10
    goto label_0x197658;                                        // 0x00197640: b 0x197658
    a3 = 2;                                                     // 0x00197644: addiu $a3, $zero, 2
label_0x197648:
    a0 = 0x40;                                                  // 0x00197648: addiu $a0, $zero, 0x40
    func_0018dc30();  // 18dc30                                // 0x0019764c: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00197650: addiu $a1, $zero, 0x10
    a3 = 3;                                                     // 0x00197654: addiu $a3, $zero, 3
label_0x197658:
    a0 = 0x7000 << 16;                                          // 0x00197658: lui $a0, 0x7000
    v1 = 0x8000 << 16;                                          // 0x0019765c: lui $v1, 0x8000
    a0 = a3 + a0;                                               // 0x00197660: addu $a0, $a3, $a0
    a1 = 0x1300 << 16;                                          // 0x00197664: lui $a1, 0x1300
    a0 = a0 | v1;                                               // 0x00197668: or $a0, $a0, $v1
    v1 = 0x5000 << 16;                                          // 0x00197670: lui $v1, 0x5000
    a0 = a3 | v1;                                               // 0x00197678: or $a0, $a3, $v1
    v1 = a3 + -1;                                               // 0x00197680: addiu $v1, $a3, -1
    *(uint32_t*)((v0) + 8) = a1;                                // 0x00197684: sw $a1, 8($v0)
    *(uint32_t*)((v0) + 0xc) = a0;                              // 0x0019768c: sw $a0, 0xc($v0)
    v1 = 0x1000 << 16;                                          // 0x00197690: lui $v1, 0x1000
    v1 = 0 | 0x8000;                                            // 0x0019769c: ori $v1, $zero, 0x8000
    v1 = v1 | a0;                                               // 0x001976a0: or $v1, $v1, $a0
    a1 = a1 | v1;                                               // 0x001976a4: or $a1, $a1, $v1
    a0 = 0xe;                                                   // 0x001976a8: addiu $a0, $zero, 0xe
    v1 = 2;                                                     // 0x001976b0: addiu $v1, $zero, 2
    if (s1 == v1) goto label_0x197700;                          // 0x001976b4: beq $s1, $v1, 0x197700
    v1 = 1;                                                     // 0x001976bc: addiu $v1, $zero, 1
    if (s1 == v1) goto label_0x1976ec;                          // 0x001976c0: beq $s1, $v1, 0x1976ec
    at = 0x29 << 16;                                            // 0x001976c4: lui $at, 0x29
    if (s1 == 0) goto label_0x1976d8;                           // 0x001976c8: beqz $s1, 0x1976d8
    at = 0x29 << 16;                                            // 0x001976cc: lui $at, 0x29
    goto label_0x19772c;                                        // 0x001976d0: b 0x19772c
label_0x1976d8:
    v1 = 0x4e;                                                  // 0x001976d8: addiu $v1, $zero, 0x4e
    goto label_0x197728;                                        // 0x001976e4: b 0x197728
label_0x1976ec:
    v1 = 0x4f;                                                  // 0x001976ec: addiu $v1, $zero, 0x4f
    goto label_0x197728;                                        // 0x001976f8: b 0x197728
label_0x197700:
    at = 0x29 << 16;                                            // 0x00197700: lui $at, 0x29
    a0 = 0x4e;                                                  // 0x00197704: addiu $a0, $zero, 0x4e
    v1 = 0x4f;                                                  // 0x0019770c: addiu $v1, $zero, 0x4f
    at = 0x29 << 16;                                            // 0x00197710: lui $at, 0x29
label_0x197728:
label_0x19772c:
    a3 = 0x29 << 16;                                            // 0x0019772c: lui $a3, 0x29
    func_0018ce40();  // 18ce40                                // 0x0019773c: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x00197740: addiu $a3, $a3, -0x350
    v0 = 1;                                                     // 0x00197748: addiu $v0, $zero, 1
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019774c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00197750: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00197754: jr $ra
    sp = sp + 0x30;                                             // 0x00197758: addiu $sp, $sp, 0x30
}