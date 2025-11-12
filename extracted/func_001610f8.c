void func_001610f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001610f8: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x0016110c: jal 0x15fc80
    a0 = 0x23 << 16;                                            // 0x00161114: lui $a0, 0x23
    if (v0 != 0) goto label_0x161138;                           // 0x00161118: bnez $v0, 0x161138
    a0 = &str_002284a0;  // "E204011: mwPlyFxSetCompoMode: COMPO_Z needs setting in MWPLY Creation." // 0x0016111c: addiu $a0, $a0, -0x7b60
    return func_001634a8();  // Tail call                        // 0x0016112c: j 0x163410
    sp = sp + 0x20;                                             // 0x00161130: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00161134: nop 
label_0x161138:
    v0 = *(int32_t*)((s1) + 0xe8);                              // 0x00161138: lw $v0, 0xe8($s1)
    if (v0 != 0) goto label_0x161190;                           // 0x0016113c: bnez $v0, 0x161190
    v0 = 0x101;                                                 // 0x00161144: addiu $v0, $zero, 0x101
    if (s0 != v0) goto label_0x161168;                          // 0x00161148: bne $s0, $v0, 0x161168
    a0 = 0x23 << 16;                                            // 0x0016114c: lui $a0, 0x23
    a0 = &str_002284d8;  // "E204012: mwPlyFxSetCompoMode: COMPO_AUTO needs setting in MWPLY Creation." // 0x00161158: addiu $a0, $a0, -0x7b28
    return func_001634a8();  // Tail call                        // 0x00161160: j 0x163410
    sp = sp + 0x20;                                             // 0x00161164: addiu $sp, $sp, 0x20
label_0x161168:
    if (s0 != 0) goto label_0x161190;                           // 0x00161168: bnez $s0, 0x161190
    a0 = 0x23 << 16;                                            // 0x00161170: lui $a0, 0x23
    a0 = &str_00228520;  // "E2011915: mwPlyFxGetCompoMode: handle is invalid." // 0x0016117c: addiu $a0, $a0, -0x7ae0
    return func_001634a8();  // Tail call                        // 0x00161184: j 0x163410
    sp = sp + 0x20;                                             // 0x00161188: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016118c: nop 
label_0x161190:
    goto label_0x1611a8;                                        // 0x001611a0: j 0x1611a8
    sp = sp + 0x20;                                             // 0x001611a4: addiu $sp, $sp, 0x20
label_0x1611a8:
    sp = sp + -0x10;                                            // 0x001611a8: addiu $sp, $sp, -0x10
    func_00160860();  // 0x160850                                // 0x001611b4: jal 0x160850
    return func_0017cf10();  // Tail call                        // 0x001611cc: j 0x17cf08
    sp = sp + 0x10;                                             // 0x001611d0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001611d4: nop 
    sp = sp + -0x10;                                            // 0x001611d8: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x001611e4: jal 0x15fc80
    if (v0 != 0) return;  // Branch to 0x161218                 // 0x001611ec: bnez $v0, 0x161218
    a0 = 0x23 << 16;                                            // 0x001611f4: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x001611f8: jal 0x163410
    a0 = &str_00228570;  // "E307092: mwPlyFxGetOutBufPitchHeight: handle is invalid." // 0x001611fc: addiu $a0, $a0, -0x7a90
    return;                                                     // 0x0016120c: jr $ra
    sp = sp + 0x10;                                             // 0x00161210: addiu $sp, $sp, 0x10
}