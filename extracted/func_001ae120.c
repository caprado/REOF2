void func_001ae120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ae120: addiu $sp, $sp, -0x30
    v0 = a0 << 1;                                               // 0x001ae124: sll $v0, $a0, 1
    a1 = 0x2b << 16;                                            // 0x001ae12c: lui $a1, 0x2b
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ae130: addu.qb $zero, $sp, $s1
    v0 = v0 + a0;                                               // 0x001ae134: addu $v0, $v0, $a0
    v1 = a0 << 2;                                               // 0x001ae13c: sll $v1, $a0, 2
    s0 = v0 << 3;                                               // 0x001ae140: sll $s0, $v0, 3
    a1 = a1 + -0x57de;                                          // 0x001ae144: addiu $a1, $a1, -0x57de
    v0 = 0x2b << 16;                                            // 0x001ae148: lui $v0, 0x2b
    v0 = v0 + -0x5788;                                          // 0x001ae150: addiu $v0, $v0, -0x5788
    v0 = v0 + v1;                                               // 0x001ae154: addu $v0, $v0, $v1
    v1 = a1 + s0;                                               // 0x001ae158: addu $v1, $a1, $s0
    g_002aa823 = 0;  // Global at 0x002aa823                    // 0x001ae15c: sb $zero, 0($v1)
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001ae160: lw $a0, 0($v0)
    func_00132ab0();  // 132ab0                                // 0x001ae164: jal 0x132ab0
    a1 = g_002aa823;  // Global at 0x002aa823                   // 0x001ae168: lb $a1, 0($v1)
    v0 = 0x2b << 16;                                            // 0x001ae16c: lui $v0, 0x2b
    v0 = v0 + -0x57d8;                                          // 0x001ae170: addiu $v0, $v0, -0x57d8
    v0 = v0 + s0;                                               // 0x001ae174: addu $v0, $v0, $s0
    a1 = g_002aa828;  // Global at 0x002aa828                   // 0x001ae178: lw $a1, 0($v0)
    func_001ad9c0();  // 1ad9c0                                // 0x001ae17c: jal 0x1ad9c0
    v1 = 0x2b << 16;                                            // 0x001ae184: lui $v1, 0x2b
    v1 = v1 + -0x57dd;                                          // 0x001ae188: addiu $v1, $v1, -0x57dd
    v1 = v1 + s0;                                               // 0x001ae18c: addu $v1, $v1, $s0
    g_002aa823 = 0;  // Global at 0x002aa823                    // 0x001ae190: sb $zero, 0($v1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ae198: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ae19c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ae1a0: jr $ra
    sp = sp + 0x30;                                             // 0x001ae1a4: addiu $sp, $sp, 0x30
}