void func_001298c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001298c8: addiu $sp, $sp, -0x10
    if (s0 != 0) goto label_0x1298f0;                           // 0x001298d4: bnez $s0, 0x1298f0
    a0 = 0x22 << 16;                                            // 0x001298dc: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x001298e0: jal 0x127d90
    a0 = &str_00222a00;  // "E9040830:'adxf' is NULL.(ADXF_GetNumReqSct)" // 0x001298e4: addiu $a0, $a0, 0x2a00
    goto label_0x129954;                                        // 0x001298e8: b 0x129954
    v0 = -3;                                                    // 0x001298ec: addiu $v0, $zero, -3
label_0x1298f0:
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x001298f0: lw $v1, 0xc($s0)
    v0 = 0xf << 16;                                             // 0x001298f4: lui $v0, 0xf
    v0 = v0 | 0xfffe;                                           // 0x001298f8: ori $v0, $v0, 0xfffe
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x001298fc: slt $v0, $v0, $v1
    if (v0 == 0) goto label_0x129924;                           // 0x00129900: beqz $v0, 0x129924
    /* nop */                                                   // 0x00129904: nop 
    func_00130d30();  // 0x130ca8                                // 0x00129908: jal 0x130ca8
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012990c: lw $a0, 4($s0)
    func_00130280();  // 0x130278                                // 0x00129910: jal 0x130278
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00129914: lw $a0, 4($s0)
    v1 = 4;                                                     // 0x00129918: addiu $v1, $zero, 4
    if (v0 == v1) goto label_0x129954;                          // 0x0012991c: beq $v0, $v1, 0x129954
    v0 = -5;                                                    // 0x00129920: addiu $v0, $zero, -5
label_0x129924:
    func_00130b08();  // 0x130b00                                // 0x00129924: jal 0x130b00
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00129928: lw $a0, 4($s0)
    a0 = 0xf << 16;                                             // 0x0012992c: lui $a0, 0xf
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x00129930: slti $v1, $v0, 0
    a1 = v0 + 0x7ff;                                            // 0x00129934: addiu $a1, $v0, 0x7ff
    if (v1 != 0) v0 = a1;                                       // 0x00129938: movn $v0, $a1, $v1
    v1 = -5;                                                    // 0x0012993c: addiu $v1, $zero, -5
    v0 = v0 >> 0xb;                                             // 0x00129940: sra $v0, $v0, 0xb
    a0 = a0 | 0xfffe;                                           // 0x00129944: ori $a0, $a0, 0xfffe
    a0 = (a0 < v0) ? 1 : 0;                                     // 0x00129948: slt $a0, $a0, $v0
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0012994c: sw $v0, 0xc($s0)
    if (a0 != 0) v0 = v1;                                       // 0x00129950: movn $v0, $v1, $a0
label_0x129954:
    return;                                                     // 0x0012995c: jr $ra
    sp = sp + 0x10;                                             // 0x00129960: addiu $sp, $sp, 0x10
}