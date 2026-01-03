void func_0010a618() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010a618: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x0010a630: lw $a0, 0x54($s0)
    func_001099b8();  // 1099b8                                // 0x0010a634: jal 0x1099b8
    a1 = *(int16_t*)((s0) + 0xe);                               // 0x0010a638: lh $a1, 0xe($s0)
    if (a0 < 0) goto label_0x10a660;                            // 0x0010a644: bltz $a0, 0x10a660
    v1 = *(int32_t*)((s0) + 0x50);                              // 0x0010a64c: lw $v1, 0x50($s0)
    v1 = v1 + a0;                                               // 0x0010a650: addu $v1, $v1, $a0
    goto label_0x10a66c;                                        // 0x0010a654: b 0x10a66c
    *(uint32_t*)((s0) + 0x50) = v1;                             // 0x0010a658: sw $v1, 0x50($s0)
    /* nop */                                                   // 0x0010a65c: nop 
label_0x10a660:
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a660: lhu $v1, 0xc($s0)
    v1 = v1 & 0xefff;                                           // 0x0010a664: andi $v1, $v1, 0xefff
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x0010a668: sh $v1, 0xc($s0)
label_0x10a66c:
    return;                                                     // 0x0010a674: jr $ra
    sp = sp + 0x10;                                             // 0x0010a678: addiu $sp, $sp, 0x10
}