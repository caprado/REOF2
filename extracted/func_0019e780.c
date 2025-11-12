void func_0019e780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0019e780: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x0019e784: addiu $v0, $zero, 1
    *(uint32_t*)((gp) + -0x6488) = 0;                           // 0x0019e790: sw $zero, -0x6488($gp)
    *(uint32_t*)((gp) + -0x6440) = v0;                          // 0x0019e798: sw $v0, -0x6440($gp)
label_0x19e79c:
    v0 = 0x29 << 16;                                            // 0x0019e79c: lui $v0, 0x29
    v1 = s0 << 3;                                               // 0x0019e7a0: sll $v1, $s0, 3
    v0 = v0 + -0x3b80;                                          // 0x0019e7a4: addiu $v0, $v0, -0x3b80
    a0 = v0 + v1;                                               // 0x0019e7ac: addu $a0, $v0, $v1
    func_0018da10();  // 0x18d9e0                                // 0x0019e7b0: jal 0x18d9e0
    a2 = 8;                                                     // 0x0019e7b4: addiu $a2, $zero, 8
    s0 = s0 + 1;                                                // 0x0019e7b8: addiu $s0, $s0, 1
    v0 = (s0 < 6) ? 1 : 0;                                      // 0x0019e7bc: slti $v0, $s0, 6
    if (v0 != 0) goto label_0x19e79c;                           // 0x0019e7c0: bnez $v0, 0x19e79c
    /* nop */                                                   // 0x0019e7c4: nop 
    *(uint32_t*)((gp) + -0x6480) = 0;                           // 0x0019e7c8: sw $zero, -0x6480($gp)
    *(uint32_t*)((gp) + -0x647c) = 0;                           // 0x0019e7d0: sw $zero, -0x647c($gp)
    v1 = s0 << 3;                                               // 0x0019e7d4: sll $v1, $s0, 3
label_0x19e7d8:
    v0 = 0x29 << 16;                                            // 0x0019e7d8: lui $v0, 0x29
    v1 = v1 - s0;                                               // 0x0019e7dc: subu $v1, $v1, $s0
    v0 = v0 + -0x3b50;                                          // 0x0019e7e0: addiu $v0, $v0, -0x3b50
    v1 = v1 << 2;                                               // 0x0019e7e4: sll $v1, $v1, 2
    a2 = 0x1c;                                                  // 0x0019e7ec: addiu $a2, $zero, 0x1c
    func_0018da10();  // 0x18d9e0                                // 0x0019e7f0: jal 0x18d9e0
    a0 = v0 + v1;                                               // 0x0019e7f4: addu $a0, $v0, $v1
    s0 = s0 + 1;                                                // 0x0019e7f8: addiu $s0, $s0, 1
    v1 = (s0 < 0x200) ? 1 : 0;                                  // 0x0019e7fc: slti $v1, $s0, 0x200
    if (v1 != 0) goto label_0x19e7d8;                           // 0x0019e800: bnez $v1, 0x19e7d8
    v1 = s0 << 3;                                               // 0x0019e804: sll $v1, $s0, 3
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019e80c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019e810: jr $ra
    sp = sp + 0x20;                                             // 0x0019e814: addiu $sp, $sp, 0x20
}