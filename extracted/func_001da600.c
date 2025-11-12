void func_001da600() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001a2c30();  // Tail call                        // 0x001da600: j 0x1a2a40
    /* nop */                                                   // 0x001da604: nop 
    /* nop */                                                   // 0x001da608: nop 
    /* nop */                                                   // 0x001da60c: nop 
    return func_001a1e50();  // Tail call                        // 0x001da610: j 0x1a1c30
    /* nop */                                                   // 0x001da614: nop 
    /* nop */                                                   // 0x001da618: nop 
    /* nop */                                                   // 0x001da61c: nop 
    sp = sp + -0x40;                                            // 0x001da620: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001da62c: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((a0) + 4);                                 // 0x001da634: lw $s0, 4($a0)
    if (s0 == 0) goto label_0x1da678;                           // 0x001da638: beqz $s0, 0x1da678
    goto label_0x1da65c;                                        // 0x001da640: b 0x1da65c
label_0x1da648:
    func_001b1000();  // 0x1b0fc0                                // 0x001da648: jal 0x1b0fc0
    /* nop */                                                   // 0x001da64c: nop 
    *(uint32_t*)(s0) = v0;                                      // 0x001da650: sw $v0, 0($s0)
    s1 = s1 + 1;                                                // 0x001da654: addiu $s1, $s1, 1
    s0 = s0 + 4;                                                // 0x001da658: addiu $s0, $s0, 4
label_0x1da65c:
    v0 = *(uint16_t*)((s2) + 0x816);                            // 0x001da65c: lhu $v0, 0x816($s2)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001da660: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x1da648;                           // 0x001da664: bnez $v0, 0x1da648
    /* nop */                                                   // 0x001da668: nop 
    a1 = *(int32_t*)((s2) + 0x80c);                             // 0x001da66c: lw $a1, 0x80c($s2)
    func_00193750();  // 0x193600                                // 0x001da670: jal 0x193600
    a0 = *(int32_t*)((s2) + 4);                                 // 0x001da674: lw $a0, 4($s2)
label_0x1da678:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001da67c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001da680: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001da684: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001da688: jr $ra
    sp = sp + 0x40;                                             // 0x001da68c: addiu $sp, $sp, 0x40
}