void func_00135220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00135220: addiu $sp, $sp, -0x40
    func_0010ae00();  // 10ae00                                // 0x00135244: jal 0x10ae00
    v0 = 0x25 << 16;                                            // 0x00135250: lui $v0, 0x25
    s2 = v0 + 0x37ec;                                           // 0x00135254: addiu $s2, $v0, 0x37ec
    s5 = s2 + -4;                                               // 0x00135258: addiu $s5, $s2, -4
    s0 = s1 << 4;                                               // 0x0013525c: sll $s0, $s1, 4
label_0x135260:
    s1 = s1 + 1;                                                // 0x00135260: addiu $s1, $s1, 1
    a1 = s0 + s2;                                               // 0x00135268: addu $a1, $s0, $s2
    func_0010b0e8();  // 10b0e8                                // 0x0013526c: jal 0x10b0e8
    if (v0 != 0) goto label_0x135288;                           // 0x00135274: bnez $v0, 0x135288
    v1 = ((unsigned)s1 < (unsigned)0x20) ? 1 : 0;               // 0x00135278: sltiu $v1, $s1, 0x20
    v1 = s0 + s5;                                               // 0x0013527c: addu $v1, $s0, $s5
    goto label_0x135294;                                        // 0x00135280: b 0x135294
    v0 = *(int32_t*)(v1);                                       // 0x00135284: lw $v0, 0($v1)
label_0x135288:
    if (v1 != 0) goto label_0x135260;                           // 0x00135288: bnez $v1, 0x135260
    s0 = s1 << 4;                                               // 0x0013528c: sll $s0, $s1, 4
label_0x135294:
    return;                                                     // 0x001352b0: jr $ra
    sp = sp + 0x40;                                             // 0x001352b4: addiu $sp, $sp, 0x40
}