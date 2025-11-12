void func_0015f320() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015f320: addiu $sp, $sp, -0x20
    func_0010af38();  // 0x10ae00                                // 0x0015f338: jal 0x10ae00
    a0 = 0x22 << 16;                                            // 0x0015f340: lui $a0, 0x22
    v1 = *(int32_t*)((s0) + 0x114);                             // 0x0015f344: lw $v1, 0x114($s0)
    a0 = a0 + 0x7ae0;                                           // 0x0015f348: addiu $a0, $a0, 0x7ae0
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x0015f34c: slt $v1, $v1, $v0
    if (v1 == 0) goto label_0x15f380;                           // 0x0015f350: beqz $v1, 0x15f380
    func_001634a8();  // 0x163410                                // 0x0015f358: jal 0x163410
    /* nop */                                                   // 0x0015f35c: nop 
    a2 = *(int32_t*)((s0) + 0x114);                             // 0x0015f360: lw $a2, 0x114($s0)
    a0 = *(int32_t*)((s0) + 0x110);                             // 0x0015f36c: lw $a0, 0x110($s0)
    return func_0010b460();  // Tail call                        // 0x0015f378: j 0x10b2a0
    sp = sp + 0x20;                                             // 0x0015f37c: addiu $sp, $sp, 0x20
label_0x15f380:
    a0 = *(int32_t*)((s0) + 0x110);                             // 0x0015f380: lw $a0, 0x110($s0)
    return func_0010ae00();  // Tail call                        // 0x0015f390: j 0x10ac68
    sp = sp + 0x20;                                             // 0x0015f394: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x0015f398: addiu $sp, $sp, -0x10
    func_0015f398();  // 0x15f320                                // 0x0015f3a4: jal 0x15f320
    v0 = 0xf << 16;                                             // 0x0015f3ac: lui $v0, 0xf
    v1 = 1;                                                     // 0x0015f3b0: addiu $v1, $zero, 1
    v0 = v0 | 0xffff;                                           // 0x0015f3b4: ori $v0, $v0, 0xffff
    *(uint32_t*)((s0) + 0x118) = v1;                            // 0x0015f3b8: sw $v1, 0x118($s0)
    *(uint32_t*)((s0) + 0x124) = v0;                            // 0x0015f3bc: sw $v0, 0x124($s0)
    *(uint32_t*)((s0) + 0x11c) = 0;                             // 0x0015f3c0: sw $zero, 0x11c($s0)
    *(uint32_t*)((s0) + 0x120) = 0;                             // 0x0015f3c4: sw $zero, 0x120($s0)
    return;                                                     // 0x0015f3d0: jr $ra
    sp = sp + 0x10;                                             // 0x0015f3d4: addiu $sp, $sp, 0x10
}