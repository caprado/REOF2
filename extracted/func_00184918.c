void func_00184918() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x00184918: addiu $sp, $sp, -0xa0
    v0 = 0x28 << 16;                                            // 0x0018491c: lui $v0, 0x28
    fp = v0 + -0x7c00;                                          // 0x00184930: addiu $fp, $v0, -0x7c00
    s7 = 0x8101 << 16;                                          // 0x00184938: lui $s7, 0x8101
    s6 = 0xffff << 16;                                          // 0x00184940: lui $s6, 0xffff
    s5 = 0x7fff << 16;                                          // 0x00184948: lui $s5, 0x7fff
    *(uint32_t*)(s3) = 0;                                       // 0x0018496c: sw $zero, 0($s3)
    s7 = s7 | 0x6f;                                             // 0x00184970: ori $s7, $s7, 0x6f
    s6 = s6 | 0xffff;                                           // 0x00184974: ori $s6, $s6, 0xffff
    s5 = s5 | 0xffff;                                           // 0x00184978: ori $s5, $s5, 0xffff
label_0x184980:
    func_00187390();  // 187390                                // 0x00184988: jal 0x187390
    a3 = 1;                                                     // 0x0018498c: addiu $a3, $zero, 1
    if (v0 != 0) goto label_0x1849a4;                           // 0x00184990: bnez $v0, 0x1849a4
    *(uint32_t*)(s3) = s7;                                      // 0x00184998: sw $s7, 0($s3)
    goto label_0x184a14;                                        // 0x0018499c: b 0x184a14
    v0 = -1;                                                    // 0x001849a0: addiu $v0, $zero, -1
label_0x1849a4:
label_0x1849a8:
    v0 = *(uint16_t*)(a0);                                      // 0x001849a8: lhu $v0, 0($a0)
    v1 = s1 + 1;                                                // 0x001849ac: addiu $v1, $s1, 1
    s2 = s2 + -1;                                               // 0x001849b0: addiu $s2, $s2, -1
    v0 = v0 & 0x8000;                                           // 0x001849b4: andi $v0, $v0, 0x8000
    if (s2 == 0) goto label_0x184a04;                           // 0x001849b8: beqz $s2, 0x184a04
    if (v0 == 0) s1 = v1;                                       // 0x001849bc: movz $s1, $v1, $v0
    a1 = a1 + 1;                                                // 0x001849c0: addiu $a1, $a1, 1
    v0 = (a1 < 2) ? 1 : 0;                                      // 0x001849c4: slti $v0, $a1, 2
    if (v0 != 0) goto label_0x1849a8;                           // 0x001849c8: bnez $v0, 0x1849a8
    a0 = a0 + 0x200;                                            // 0x001849cc: addiu $a0, $a0, 0x200
    func_00182b88();  // 182b88                                // 0x001849d8: jal 0x182b88
    v1 = *(int32_t*)(s3);                                       // 0x001849e0: lw $v1, 0($s3)
    if (v1 == 0) goto label_0x1849f4;                           // 0x001849e4: beqz $v1, 0x1849f4
    goto label_0x184a14;                                        // 0x001849ec: b 0x184a14
    v0 = -1;                                                    // 0x001849f0: addiu $v0, $zero, -1
label_0x1849f4:
    if (s0 == s6) goto label_0x184a10;                          // 0x001849f4: beq $s0, $s6, 0x184a10
    s0 = s0 & s5;                                               // 0x001849f8: and $s0, $s0, $s5
    goto label_0x184980;                                        // 0x001849fc: b 0x184980
label_0x184a04:
    v0 = s1 + 1;                                                // 0x00184a04: addiu $v0, $s1, 1
    goto label_0x184a14;                                        // 0x00184a08: b 0x184a14
    if (a1 != 0) v0 = s1;                                       // 0x00184a0c: movn $v0, $s1, $a1
label_0x184a10:
label_0x184a14:
    return;                                                     // 0x00184a3c: jr $ra
    sp = sp + 0xa0;                                             // 0x00184a40: addiu $sp, $sp, 0xa0
}