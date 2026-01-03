void func_00130138() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00130138: addiu $sp, $sp, -0x30
    func_00141390();  // 141390                                // 0x00130164: jal 0x141390
    s1 = s1 << 0xb;                                             // 0x0013016c: sll $s1, $s1, 0xb
    v0 = 1;                                                     // 0x00130170: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0xc) = s2;                              // 0x00130174: sw $s2, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = s1;                             // 0x00130178: sw $s1, 0x10($s0)
    *(uint32_t*)((s0) + 0x4c) = s3;                             // 0x0013017c: sw $s3, 0x4c($s0)
    *(uint32_t*)((s0) + 0x50) = s4;                             // 0x00130180: sw $s4, 0x50($s0)
    *(uint8_t*)((s0) + 0x41) = v0;                              // 0x00130184: sb $v0, 0x41($s0)
    return func_001413c0();  // Tail call                        // 0x001301a0: j 0x1413a8
    sp = sp + 0x30;                                             // 0x001301a4: addiu $sp, $sp, 0x30
    sp = sp + -0x10;                                            // 0x001301a8: addiu $sp, $sp, -0x10
    func_00130138();  // 130138                                // 0x001301b4: jal 0x130138
    /* nop */                                                   // 0x001301bc: nop 
label_0x1301c0:
    func_00129ce0();  // 129ce0                                // 0x001301c0: jal 0x129ce0
    /* nop */                                                   // 0x001301c4: nop 
    v0 = *(int8_t*)((s0) + 0x41);                               // 0x001301c8: lb $v0, 0x41($s0)
    if (v0 != 0) goto label_0x1301c0;                           // 0x001301cc: bnez $v0, 0x1301c0
    return;                                                     // 0x001301d8: jr $ra
    sp = sp + 0x10;                                             // 0x001301dc: addiu $sp, $sp, 0x10
}