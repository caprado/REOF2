void func_0017e2e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_1;
    
    sp = sp + -0x20;                                            // 0x0017e2e8: addiu $sp, $sp, -0x20
    if (s0 == 0) goto label_0x17e304;                           // 0x0017e2f4: beqz $s0, 0x17e304
    if (a1 >= 0) goto label_0x17e310;                           // 0x0017e2fc: bgez $a1, 0x17e310
    a1 = 0x23 << 16;                                            // 0x0017e300: lui $a1, 0x23
label_0x17e304:
    goto label_0x17e350;                                        // 0x0017e304: b 0x17e350
    /* nop */                                                   // 0x0017e30c: nop 
label_0x17e310:
    a1 = a1 + -0x6210;                                          // 0x0017e314: addiu $a1, $a1, -0x6210
    v0 = *(int8_t*)((s0) + 0x10);                               // 0x0017e318: lb $v0, 0x10($s0)
    v1 = *(int8_t*)((s0) + 0x11);                               // 0x0017e31c: lb $v1, 0x11($s0)
    local_0 = v0;                                               // 0x0017e320: sb $v0, 0($sp)
    local_1 = v1;                                               // 0x0017e324: sb $v1, 1($sp)
    func_0010b2a0();  // 0x10b0e8                                // 0x0017e328: jal 0x10b0e8
    a2 = 2;                                                     // 0x0017e32c: addiu $a2, $zero, 2
    a1 = 0x23 << 16;                                            // 0x0017e330: lui $a1, 0x23
    a0 = s0 + 0x14;                                             // 0x0017e334: addiu $a0, $s0, 0x14
    a1 = a1 + -0x6220;                                          // 0x0017e338: addiu $a1, $a1, -0x6220
    if (v0 == 0) goto label_0x17e350;                           // 0x0017e33c: beqz $v0, 0x17e350
    a2 = 1;                                                     // 0x0017e340: addiu $a2, $zero, 1
    func_0010b2a0();  // 0x10b0e8                                // 0x0017e344: jal 0x10b0e8
    /* nop */                                                   // 0x0017e348: nop 
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0017e34c: sltiu $v0, $v0, 1
label_0x17e350:
    return;                                                     // 0x0017e358: jr $ra
    sp = sp + 0x20;                                             // 0x0017e35c: addiu $sp, $sp, 0x20
}