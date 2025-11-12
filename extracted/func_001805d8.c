void func_001805d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001805d8: addiu $sp, $sp, -0x20
    func_00188dc8();  // 0x188c80                                // 0x001805e4: jal 0x188c80
    if (a3 < 0) goto label_0x18061c;                            // 0x001805f0: bltz $a3, 0x18061c
    a0 = 0x334;                                                 // 0x001805f4: addiu $a0, $zero, 0x334
    v1 = 0x26 << 16;                                            // 0x001805f8: lui $v1, 0x26
    v1 = v1 + 0x7908;                                           // 0x00180600: addiu $v1, $v1, 0x7908
    a2 = 1;                                                     // 0x00180604: addiu $a2, $zero, 1
    a1 = v1 + a0;                                               // 0x0018060c: addu $a1, $v1, $a0
    *(uint32_t*)((a1) + 0xc) = a3;                              // 0x00180614: sw $a3, 0xc($a1)
    g_0026790c = a2;  // Global at 0x0026790c                   // 0x00180618: sw $a2, 4($v1)
label_0x18061c:
    return;                                                     // 0x00180624: jr $ra
    sp = sp + 0x20;                                             // 0x00180628: addiu $sp, $sp, 0x20
}