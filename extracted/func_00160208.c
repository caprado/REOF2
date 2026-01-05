void func_00160208() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00160208: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x00160224: jal 0x15fc80
    if (v0 != 0) goto label_0x160260;                           // 0x00160234: bnez $v0, 0x160260
    a0 = 0x22 << 16;                                            // 0x0016023c: lui $a0, 0x22
    a0 = &str_00227f98;  // "E1122608 mwSfdGetOutPan: handle is invalid." // 0x00160248: addiu $a0, $a0, 0x7f98
    return func_001634a8();  // Tail call                        // 0x00160254: j 0x163410
    sp = sp + 0x20;                                             // 0x00160258: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016025c: nop 
label_0x160260:
    return func_0015f498();  // Tail call                        // 0x00160270: j 0x15f480
    sp = sp + 0x20;                                             // 0x00160274: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x00160278: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0016028c: jal 0x15fc80
    if (v0 != 0) return;  // Branch to 0x1602c8                 // 0x00160298: bnez $v0, 0x1602c8
    a0 = 0x22 << 16;                                            // 0x001602a0: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x001602a4: jal 0x163410
    a0 = &str_00227fc8;  // "E1122623: mwPlyGetNumSkipEmptyB: handle is invalid." // 0x001602a8: addiu $a0, $a0, 0x7fc8
    return;                                                     // 0x001602bc: jr $ra
    sp = sp + 0x20;                                             // 0x001602c0: addiu $sp, $sp, 0x20
}