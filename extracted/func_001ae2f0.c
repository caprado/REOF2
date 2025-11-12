void func_001ae2f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ae2f0: addiu $sp, $sp, -0x20
    func_001b7a80();  // 0x1b7a70                                // 0x001ae300: jal 0x1b7a70
    a0 = 0xe;                                                   // 0x001ae304: addiu $a0, $zero, 0xe
    if (v0 == 0) goto label_0x1ae318;                           // 0x001ae308: beqz $v0, 0x1ae318
    /* nop */                                                   // 0x001ae30c: nop 
    goto label_0x1ae36c;                                        // 0x001ae310: b 0x1ae36c
    v0 = 1;                                                     // 0x001ae314: addiu $v0, $zero, 1
label_0x1ae318:
    v0 = 0x2b << 16;                                            // 0x001ae318: lui $v0, 0x2b
    v1 = s0 << 2;                                               // 0x001ae31c: sll $v1, $s0, 2
    v0 = v0 + -0x5788;                                          // 0x001ae320: addiu $v0, $v0, -0x5788
    v0 = v0 + v1;                                               // 0x001ae324: addu $v0, $v0, $v1
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001ae328: lw $a0, 0($v0)
    if (a0 != 0) goto label_0x1ae33c;                           // 0x001ae32c: bnez $a0, 0x1ae33c
    v1 = s0 << 1;                                               // 0x001ae330: sll $v1, $s0, 1
    goto label_0x1ae36c;                                        // 0x001ae334: b 0x1ae36c
    v0 = 1;                                                     // 0x001ae338: addiu $v0, $zero, 1
label_0x1ae33c:
    v0 = 0x2b << 16;                                            // 0x001ae33c: lui $v0, 0x2b
    v1 = v1 + s0;                                               // 0x001ae340: addu $v1, $v1, $s0
    v0 = v0 + -0x57dd;                                          // 0x001ae344: addiu $v0, $v0, -0x57dd
    v1 = v1 << 3;                                               // 0x001ae348: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001ae34c: addu $v0, $v0, $v1
    v0 = g_002aa823;  // Global at 0x002aa823                   // 0x001ae350: lb $v0, 0($v0)
    if (v0 != 0) goto label_0x1ae364;                           // 0x001ae354: bnez $v0, 0x1ae364
    v0 = 1;                                                     // 0x001ae358: addiu $v0, $zero, 1
    goto label_0x1ae36c;                                        // 0x001ae35c: b 0x1ae36c
    /* nop */                                                   // 0x001ae360: nop 
label_0x1ae364:
    func_00132b10();  // 0x132ae0                                // 0x001ae364: jal 0x132ae0
    /* nop */                                                   // 0x001ae368: nop 
label_0x1ae36c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ae370: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ae374: jr $ra
    sp = sp + 0x20;                                             // 0x001ae378: addiu $sp, $sp, 0x20
}