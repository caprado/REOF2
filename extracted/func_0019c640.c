void func_0019c640() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0019c640: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((gp) + -0x6488);                           // 0x0019c64c: lw $v0, -0x6488($gp)
    v0 = (v0 < 6) ? 1 : 0;                                      // 0x0019c650: slti $v0, $v0, 6
    if (v0 != 0) goto label_0x19c664;                           // 0x0019c654: bnez $v0, 0x19c664
    goto label_0x19c6ec;                                        // 0x0019c65c: b 0x19c6ec
label_0x19c664:
    func_0019ebd0();  // 0x19eb90                                // 0x0019c664: jal 0x19eb90
    /* nop */                                                   // 0x0019c668: nop 
    v1 = s0 + 0xff;                                             // 0x0019c66c: addiu $v1, $s0, 0xff
    a0 = 0x29 << 16;                                            // 0x0019c670: lui $a0, 0x29
    v1 = (unsigned)v1 >> 8;                                     // 0x0019c674: srl $v1, $v1, 8
    v0 = -0x20;                                                 // 0x0019c678: addiu $v0, $zero, -0x20
    v1 = v1 + 0x1f;                                             // 0x0019c67c: addiu $v1, $v1, 0x1f
    a0 = a0 + -0x3b80;                                          // 0x0019c680: addiu $a0, $a0, -0x3b80
    goto label_0x19c6a4;                                        // 0x0019c688: b 0x19c6a4
    a1 = v1 & v0;                                               // 0x0019c68c: and $a1, $v1, $v0
label_0x19c690:
    v0 = g_0028c480;  // Global at 0x0028c480                   // 0x0019c690: lh $v0, 0($a0)
    if (v0 == 0) goto label_0x19c6b4;                           // 0x0019c694: beqz $v0, 0x19c6b4
    v0 = 1;                                                     // 0x0019c698: addiu $v0, $zero, 1
    a0 = a0 + 8;                                                // 0x0019c69c: addiu $a0, $a0, 8
    a2 = a2 + 1;                                                // 0x0019c6a0: addiu $a2, $a2, 1
label_0x19c6a4:
    v0 = (a2 < 6) ? 1 : 0;                                      // 0x0019c6a4: slti $v0, $a2, 6
    if (v0 != 0) goto label_0x19c690;                           // 0x0019c6a8: bnez $v0, 0x19c690
    /* nop */                                                   // 0x0019c6ac: nop 
    v0 = 1;                                                     // 0x0019c6b0: addiu $v0, $zero, 1
label_0x19c6b4:
    at = 0x29 << 16;                                            // 0x0019c6b4: lui $at, 0x29
    g_0028c488 = v0;  // Global at 0x0028c488                   // 0x0019c6b8: sh $v0, 0($a0)
    v0 = g_0028ffb8;  // Global at 0x0028ffb8                   // 0x0019c6bc: lw $v0, -0x48($at)
    g_0028c48a = v0;  // Global at 0x0028c48a                   // 0x0019c6c0: sh $v0, 2($a0)
    at = 0x29 << 16;                                            // 0x0019c6c4: lui $at, 0x29
    g_0028c48c = a1;  // Global at 0x0028c48c                   // 0x0019c6c8: sw $a1, 4($a0)
    v0 = g_0028ffb8;  // Global at 0x0028ffb8                   // 0x0019c6cc: lw $v0, -0x48($at)
    v1 = *(int32_t*)((gp) + -0x6488);                           // 0x0019c6d0: lw $v1, -0x6488($gp)
    v0 = v0 + a1;                                               // 0x0019c6d4: addu $v0, $v0, $a1
    at = 0x29 << 16;                                            // 0x0019c6d8: lui $at, 0x29
    v1 = v1 + 1;                                                // 0x0019c6dc: addiu $v1, $v1, 1
    g_0028ffb8 = v0;  // Global at 0x0028ffb8                   // 0x0019c6e0: sw $v0, -0x48($at)
    *(uint32_t*)((gp) + -0x6488) = v1;                          // 0x0019c6e4: sw $v1, -0x6488($gp)
    v0 = g_0028c48a;  // Global at 0x0028c48a                   // 0x0019c6e8: lhu $v0, 2($a0)
label_0x19c6ec:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019c6f0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019c6f4: jr $ra
    sp = sp + 0x20;                                             // 0x0019c6f8: addiu $sp, $sp, 0x20
}