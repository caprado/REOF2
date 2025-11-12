void func_00136838() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x00136838: addiu $sp, $sp, -0x40
    if (a0 != 0) goto label_0x136860;                           // 0x00136848: bnez $a0, 0x136860
    a0 = 0x22 << 16;                                            // 0x00136850: lui $a0, 0x22
    goto label_0x13689c;                                        // 0x00136854: b 0x13689c
    a0 = &str_002249c0;  // "cvFsSetCurVolume #2:illegal image handle" // 0x00136858: addiu $a0, $a0, 0x49c0
    /* nop */                                                   // 0x0013685c: nop 
label_0x136860:
    if (s0 != 0) goto label_0x136878;                           // 0x00136860: bnez $s0, 0x136878
    /* nop */                                                   // 0x00136864: nop 
    a0 = 0x22 << 16;                                            // 0x00136868: lui $a0, 0x22
    goto label_0x13689c;                                        // 0x0013686c: b 0x13689c
    a0 = &str_002249e8;  // "cvFsSetCurVolume #3:device not found" // 0x00136870: addiu $a0, $a0, 0x49e8
    /* nop */                                                   // 0x00136874: nop 
label_0x136878:
    func_001352b8();  // 0x135220                                // 0x00136878: jal 0x135220
    /* nop */                                                   // 0x0013687c: nop 
    if (s1 != 0) goto label_0x1368b0;                           // 0x0013688c: bnez $s1, 0x1368b0
    a2 = 0x14;                                                  // 0x00136890: addiu $a2, $zero, 0x14
    a0 = 0x22 << 16;                                            // 0x00136894: lui $a0, 0x22
    a0 = &str_00224a18;  // "cvFsAddVolumeEx #1:illegal device name" // 0x00136898: addiu $a0, $a0, 0x4a18
label_0x13689c:
    func_00134fb0();  // 0x134ec0                                // 0x0013689c: jal 0x134ec0
    /* nop */                                                   // 0x001368a0: nop 
    goto label_0x1368e0;                                        // 0x001368a4: b 0x1368e0
    v0 = -1;                                                    // 0x001368a8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001368ac: nop 
label_0x1368b0:
    func_00107d30();  // 0x107c70                                // 0x001368b0: jal 0x107c70
    /* nop */                                                   // 0x001368b4: nop 
    v0 = -1;                                                    // 0x001368b8: addiu $v0, $zero, -1
    local_0 = s0;                                               // 0x001368bc: sw $s0, 0($sp)
    a1 = 1;                                                     // 0x001368c4: addiu $a1, $zero, 1
    v1 = *(int32_t*)((s1) + 0x60);                              // 0x001368cc: lw $v1, 0x60($s1)
    if (v1 == 0) goto label_0x1368e0;                           // 0x001368d0: beqz $v1, 0x1368e0
    /* call function at address in v1 */                        // 0x001368d8: jalr $v1
    /* nop */                                                   // 0x001368dc: nop 
label_0x1368e0:
    return;                                                     // 0x001368ec: jr $ra
    sp = sp + 0x40;                                             // 0x001368f0: addiu $sp, $sp, 0x40
}