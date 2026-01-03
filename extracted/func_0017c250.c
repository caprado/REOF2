void func_0017c250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0017c250: addiu $sp, $sp, -0x20
    func_0017c3c8();  // 17c3c8                                // 0x0017c270: jal 0x17c3c8
    v1 = 1;                                                     // 0x0017c278: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x17c3b0;                          // 0x0017c27c: bnel $v0, $v1, 0x17c3b0
    v0 = ((unsigned)s2 < (unsigned)0x65) ? 1 : 0;               // 0x0017c284: sltiu $v0, $s2, 0x65
    if (v0 == 0) goto label_0x17c388;                           // 0x0017c288: beqz $v0, 0x17c388
    *(uint32_t*)((s0) + 0x38) = s2;                             // 0x0017c28c: sw $s2, 0x38($s0)
    v0 = s2 << 2;                                               // 0x0017c290: sll $v0, $s2, 2
    v1 = 0x23 << 16;                                            // 0x0017c294: lui $v1, 0x23
    v1 = v1 + v0;                                               // 0x0017c298: addu $v1, $v1, $v0
    v1 = g_002299b0;  // Global at 0x002299b0                   // 0x0017c29c: lw $v1, -0x6650($v1)
    /* jump to address in v1 */                                 // 0x0017c2a0: jr $v1
    /* nop */                                                   // 0x0017c2a4: nop 
    return func_0017c4a0();  // Tail call                        // 0x0017c2c0: j 0x17c480
    sp = sp + 0x20;                                             // 0x0017c2c4: addiu $sp, $sp, 0x20
    return func_0017c4c0();  // Tail call                        // 0x0017c2e0: j 0x17c4a0
    sp = sp + 0x20;                                             // 0x0017c2e4: addiu $sp, $sp, 0x20
    return func_0017c5b0();  // Tail call                        // 0x0017c300: j 0x17c590
    sp = sp + 0x20;                                             // 0x0017c304: addiu $sp, $sp, 0x20
    return func_0017c5d0();  // Tail call                        // 0x0017c320: j 0x17c5b0
    sp = sp + 0x20;                                             // 0x0017c324: addiu $sp, $sp, 0x20
    return func_0017c5e8();  // Tail call                        // 0x0017c340: j 0x17c5d0
    sp = sp + 0x20;                                             // 0x0017c344: addiu $sp, $sp, 0x20
    return func_0017c600();  // Tail call                        // 0x0017c360: j 0x17c5e8
    sp = sp + 0x20;                                             // 0x0017c364: addiu $sp, $sp, 0x20
    return func_0017c590();  // Tail call                        // 0x0017c380: j 0x17c4c0
    sp = sp + 0x20;                                             // 0x0017c384: addiu $sp, $sp, 0x20
label_0x17c388:
    a2 = 0x23 << 16;                                            // 0x0017c398: lui $a2, 0x23
    a2 = &str_00229970;  // "E202282: SFX_MakeTblZ16 : zclip is not set." // 0x0017c3a4: addiu $a2, $a2, -0x6690
    return func_0017cec8();  // Tail call                        // 0x0017c3a8: j 0x17ce88
    sp = sp + 0x20;                                             // 0x0017c3ac: addiu $sp, $sp, 0x20
label_0x17c3b0:
    return;                                                     // 0x0017c3bc: jr $ra
    sp = sp + 0x20;                                             // 0x0017c3c0: addiu $sp, $sp, 0x20
}