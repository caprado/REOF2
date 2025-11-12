void func_00115340() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_4, local_8;
    
    sp = sp + -0x50;                                            // 0x00115340: addiu $sp, $sp, -0x50
    v0 = COP0_REG12;  // Read system control register           // 0x00115354: mfc0 $v0, $12, 0
    v1 = 1 << 16;                                               // 0x00115358: lui $v1, 1
    v0 = v0 & v1;                                               // 0x0011535c: and $v0, $v0, $v1
    /* bnezl $v0, 0x115374 */                                   // 0x00115360: bnezl $v0, 0x115374
    v0 = 0x22 << 16;                                            // 0x00115364: lui $v0, 0x22
    v0 = 0x8000 << 16;                                          // 0x00115368: lui $v0, 0x8000
    goto label_0x1153f4;                                        // 0x0011536c: b 0x1153f4
    v0 = v0 | 0x8008;                                           // 0x00115370: ori $v0, $v0, 0x8008
    v1 = 1;                                                     // 0x00115374: addiu $v1, $zero, 1
    v0 = v0 + 0x11c0;                                           // 0x00115378: addiu $v0, $v0, 0x11c0
    local_4 = v1;                                               // 0x0011537c: sw $v1, 4($sp)
    local_14 = v0;                                              // 0x00115380: sw $v0, 0x14($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00115388: jal 0x1142e0
    local_8 = 0;                                                // 0x0011538c: sw $zero, 8($sp)
    if (s0 >= 0) goto label_0x1153a8;                           // 0x00115394: bgez $s0, 0x1153a8
    v0 = 0x8000 << 16;                                          // 0x0011539c: lui $v0, 0x8000
    goto label_0x1153f4;                                        // 0x001153a0: b 0x1153f4
    v0 = v0 | 0x8003;                                           // 0x001153a4: ori $v0, $v0, 0x8003
label_0x1153a8:
    func_0011ee58();  // 0x11ede8                                // 0x001153a8: jal 0x11ede8
    a1 = 0x11 << 16;                                            // 0x001153b0: lui $a1, 0x11
    a1 = a1 + 0x5408;                                           // 0x001153b8: addiu $a1, $a1, 0x5408
    func_0011f0c8();  // 0x11ef98                                // 0x001153bc: jal 0x11ef98
    if (s1 >= 0) goto label_0x1153e0;                           // 0x001153c8: bgez $s1, 0x1153e0
    /* nop */                                                   // 0x001153cc: nop 
    SignalSema();  // 0x1142f0                                  // 0x001153d0: jal 0x1142f0
    goto label_0x1153f4;                                        // 0x001153d8: b 0x1153f4
label_0x1153e0:
    PollSema();  // 0x114320                                    // 0x001153e0: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x001153e8: jal 0x1142f0
label_0x1153f4:
    return;                                                     // 0x00115400: jr $ra
    sp = sp + 0x50;                                             // 0x00115404: addiu $sp, $sp, 0x50
}