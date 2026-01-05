void func_0016a178() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0016a178: addiu $sp, $sp, -0x40
    *(uint32_t*)(s3) = 0;                                       // 0x0016a1a4: sw $zero, 0($s3)
    s2 = *(int32_t*)((s5) + 0x28);                              // 0x0016a1a8: lw $s2, 0x28($s5)
    v0 = s2 + 3;                                                // 0x0016a1ac: addiu $v0, $s2, 3
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x0016a1b0: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x16a1d0;                           // 0x0016a1b4: bnez $v0, 0x16a1d0
    func_0016a258();  // 16a258                                // 0x0016a1c0: jal 0x16a258
    /* bnezl $v0, 0x16a230 */                                   // 0x0016a1c8: bnezl $v0, 0x16a230
    *(uint32_t*)(s3) = s2;                                      // 0x0016a1cc: sw $s2, 0($s3)
label_0x16a1d0:
    v0 = (s0 < 4) ? 1 : 0;                                      // 0x0016a1d0: slti $v0, $s0, 4
    if (v0 != 0) goto label_0x16a208;                           // 0x0016a1d4: bnez $v0, 0x16a208
    s4 = 0xd << 16;                                             // 0x0016a1dc: lui $s4, 0xd
label_0x16a1e0:
    func_001579e8();  // 1579e8                                // 0x0016a1e4: jal 0x1579e8
    s1 = s1 + 1;                                                // 0x0016a1e8: addiu $s1, $s1, 1
    v0 = v0 & s4;                                               // 0x0016a1ec: and $v0, $v0, $s4
    /* bnezl $v0, 0x16a230 */                                   // 0x0016a1f0: bnezl $v0, 0x16a230
    *(uint32_t*)(s3) = s2;                                      // 0x0016a1f4: sw $s2, 0($s3)
    s0 = s0 + -1;                                               // 0x0016a1f8: addiu $s0, $s0, -1
    v0 = (s0 < 4) ? 1 : 0;                                      // 0x0016a1fc: slti $v0, $s0, 4
    if (v0 == 0) goto label_0x16a1e0;                           // 0x0016a200: beqz $v0, 0x16a1e0
    s2 = s2 + 1;                                                // 0x0016a204: addiu $s2, $s2, 1
label_0x16a208:
    v0 = s0 + -1;                                               // 0x0016a208: addiu $v0, $s0, -1
    v0 = ((unsigned)v0 < (unsigned)3) ? 1 : 0;                  // 0x0016a20c: sltiu $v0, $v0, 3
    /* beqzl $v0, 0x16a230 */                                   // 0x0016a210: beqzl $v0, 0x16a230
    *(uint32_t*)(s3) = s2;                                      // 0x0016a214: sw $s2, 0($s3)
    func_0016a298();  // 16a298                                // 0x0016a21c: jal 0x16a298
    a1 = s1 + s0;                                               // 0x0016a220: addu $a1, $s1, $s0
    v1 = s2 + s0;                                               // 0x0016a224: addu $v1, $s2, $s0
    if (v0 != 0) s2 = v1;                                       // 0x0016a228: movn $s2, $v1, $v0
    *(uint32_t*)(s3) = s2;                                      // 0x0016a22c: sw $s2, 0($s3)
    return;                                                     // 0x0016a24c: jr $ra
    sp = sp + 0x40;                                             // 0x0016a250: addiu $sp, $sp, 0x40
}