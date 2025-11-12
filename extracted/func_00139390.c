void func_00139390() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00139390: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001393a0: lw $v0, 0x1c($s0)
    /* beqzl $v0, 0x139448 */                                   // 0x001393a4: beqzl $v0, 0x139448
    func_001413d8();  // 0x1413c0                                // 0x001393ac: jal 0x1413c0
    /* nop */                                                   // 0x001393b0: nop 
    func_001372d0();  // 0x1372c8                                // 0x001393b4: jal 0x1372c8
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x001393b8: lw $a0, 0x1c($s0)
    v0 = ((unsigned)v1 < (unsigned)0xa) ? 1 : 0;                // 0x001393c0: sltiu $v0, $v1, 0xa
    /* beqzl $v0, 0x139438 */                                   // 0x001393c4: beqzl $v0, 0x139438
    v0 = v1 << 2;                                               // 0x001393cc: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x001393d0: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x001393d4: addu $v1, $v1, $v0
    v1 = g_002252e0;  // Global at 0x002252e0                   // 0x001393d8: lw $v1, 0x52e0($v1)
    /* jump to address in v1 */                                 // 0x001393dc: jr $v1
    /* nop */                                                   // 0x001393e0: nop 
    /* nop */                                                   // 0x001393e4: nop 
    v0 = 3;                                                     // 0x001393e8: addiu $v0, $zero, 3
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x001393ec: lw $a0, 0x1c($s0)
    goto label_0x139428;                                        // 0x001393f0: b 0x139428
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001393f4: sb $v0, 2($s0)
    a0 = *(int32_t*)((s0) + 0x10);                              // 0x001393f8: lw $a0, 0x10($s0)
    v1 = 1;                                                     // 0x001393fc: addiu $v1, $zero, 1
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00139400: lw $v0, 0xc($s0)
    *(uint32_t*)((s0) + 0x14) = a0;                             // 0x00139404: sw $a0, 0x14($s0)
    v0 = v0 + a0;                                               // 0x00139408: addu $v0, $v0, $a0
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x0013940c: lw $a0, 0x1c($s0)
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x00139410: sb $v1, 2($s0)
    goto label_0x139428;                                        // 0x00139414: b 0x139428
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x00139418: sw $v0, 0xc($s0)
    /* nop */                                                   // 0x0013941c: nop 
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x00139420: sb $zero, 2($s0)
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00139424: lw $a0, 0x1c($s0)
label_0x139428:
    func_00137128();  // 0x137088                                // 0x00139428: jal 0x137088
    /* nop */                                                   // 0x0013942c: nop 
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x00139430: sw $zero, 0x1c($s0)
    return func_00141450();  // Tail call                        // 0x0013943c: j 0x141438
    sp = sp + 0x10;                                             // 0x00139440: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00139444: nop 
    return;                                                     // 0x0013944c: jr $ra
    sp = sp + 0x10;                                             // 0x00139450: addiu $sp, $sp, 0x10
}